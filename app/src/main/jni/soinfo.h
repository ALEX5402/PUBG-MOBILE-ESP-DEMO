#include "Includes.h"
#include "ElfImg.h"

struct soinfo {
    soinfo *solist = nullptr;
    soinfo *somain = nullptr;
    std::vector<soinfo *> *preloads = nullptr;

    template<typename T>
    inline T *getStaticPointer(const ElfImg &linker, std::string_view name) {
        auto *addr = reinterpret_cast<T **>(linker.getSymbolAddress(name.data()));
        return addr == nullptr ? nullptr : *addr;
    }

    soinfo *next() {
        return *(soinfo **) ((uintptr_t) this + solist_next_offset);
    }

    const char *get_realpath() {
        return soinfo_getrealpath ? soinfo_getrealpath(this) :
               ((std::string *) ((uintptr_t) this + solist_realpath_offset))->c_str();
    }

    const char *get_soname() {
        return soinfo_get_soname ? soinfo_get_soname(this) :
               *((const char **) ((uintptr_t) this + solist_realpath_offset -
                                  sizeof(void *)));
    }

    soinfo() {
        ElfImg linker("/linker");
        solist = getStaticPointer<soinfo>(linker, "__dl__ZL6solist");
        somain = getStaticPointer<soinfo>(linker, "__dl__ZL6somain");
        preloads = reinterpret_cast<std::vector<soinfo *> *>(linker.getSymbolAddress("__dl__ZL13g_ld_preloads"));

        soinfo_getrealpath = reinterpret_cast<decltype(soinfo_getrealpath)>(linker.getSymbolAddress("__dl__ZNK6soinfo12get_realpathEv"));
        soinfo_get_soname = reinterpret_cast<decltype(soinfo_get_soname)>(linker.getSymbolAddress("__dl__ZNK6soinfo10get_sonameEv"));

        auto vsdo = getStaticPointer<soinfo>(linker, "__dl__ZL4vdso");
        for (size_t i = 0; i < 1024 / sizeof(void *); i++) {
            auto *possible_next = *(void **) ((uintptr_t) solist + i * sizeof(void *));
            if (possible_next == somain || (vsdo != nullptr && possible_next == vsdo)) {
                solist_next_offset = i * sizeof(void *);
                break;
            }
        }
    }


#ifdef __LP64__
    inline static size_t solist_next_offset = 0x30;
    constexpr static size_t solist_realpath_offset = 0x1a8;
#else
    inline static size_t solist_next_offset = 0xa4;
            constexpr static size_t solist_realpath_offset = 0x174;
#endif

    inline static const char *(*soinfo_getrealpath)(soinfo *) = nullptr;
    inline static const char *(*soinfo_get_soname)(soinfo *) = nullptr;
};