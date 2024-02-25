#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "obfuscate.h"
#include "Iconcpp.h"
#include "ImguiPP.cpp"
#include "Menu.h"
#include "Colors.h"
#include "Font.h"
#include "Icon.h"
#include "Proc.h"
#define SLEEP_TIME 1000LL / 60LL
#include "SDK.hpp"
using namespace SDK;

//2.6.0 GLOBAL  64
#define GetActorArray_Offset NULL ///  old  0x8454fac
#define GNames_Offset NULL ///  old  0x6b403f4
#define GUObject_Offset NULL  ///  old 0xbcbeb30
#define GNativeAndroidApp_Offset NULL  ///  old  0xba338f0

//2.6.0 GLOBAL  64 com.tencent.ig

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

uintptr_t UE4;
uintptr_t ANOGS;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;

bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;



// get the gworld by class
static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); // Auto
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
            return ViewPort->World;
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}
std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();
    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();
    struct GovnoArray {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };
    static thread_local GovnoArray Actors{};
    Actors = *(((GovnoArray*(*)(uintptr_t))(UE4 + GetActorArray_Offset))(reinterpret_cast<uintptr_t>(PersistentLevel)));
    if (Actors.count <= 0) {
        return {};
    }
    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.count; i++) {
        auto Actor = *(uintptr_t *) (Actors.base + (i * sizeof(uintptr_t)));
        if (Actor) {
            actors.push_back(reinterpret_cast<AActor *const>(Actor));
        }
    }
    return actors;
}

struct sRegion {
    uintptr_t start, end;
};
std::vector<sRegion> trapRegions;

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}

bool pink = false;
bool rectangle = false;
bool border = false;
bool bValid = false;
bool esp = false;
bool bullet = false;
bool customize = false;
bool extra = false;
bool memory = false;
std::map<int, bool> Items;

enum EAimTarget {
    Head = 0,
    Chest = 1
};
enum EEspp {
    no = 0,
    Up = 1,
    Middle = 2,
    Low = 3,

};
enum EEsp {
    eno = 0,
    Top = 1,
    Mid = 2,
    Buttom = 3,

};


struct sConfig {

    float Line;
    float Skeleton;
    float Fov;

    struct sESPMenu {
        EEspp By;
        EEsp Tar;
        bool Line;
        bool Box;
        bool Skeleton;
        bool Health;
        bool ShowKnockedHealth;
        bool Name;
        bool Distance;
        bool TeamID;
        bool NoBot;
        bool Grenade;
        bool LootBox;

    };
    sESPMenu ESPMenu;

    struct sVehicleESP {
        bool ShowVehicle;
        bool Vehicle;
        bool VehicleFuel;
        bool VehicleHP;
    };
    sVehicleESP VehicleESP{0};

    struct sOTHER {
        bool FPS;
    };
    sOTHER OTHER{0};

    struct sColorsESP {
        float *Box;
        float *Boxbot;
        float *Name;
        float *Distance;
        float *Skeleton;
        float *Skeletonbot;
        float *Health;
        float *TeamID;
        float *Vehicle;
        float *FPS;
        float *Text;
        float *LinePlayer;
        float *Linebot;
        float *Count;

    };
    sColorsESP ColorsESP{0};

};
sConfig Config{0};
#include "Objects.h"
#include "esp.h"

namespace Settings
{
    static int Tab = 1;
}
EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0)
        return eglSwapBuffers(dpy, surface);
    if (!g_App)
        return eglSwapBuffers(dpy, surface);
    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);

    if (!initImGui) {
        ImGui::CreateContext();
        ImGuiStyle *style = &ImGui::GetStyle();
        style->WindowRounding = 5.3f;
        style->FrameRounding = 2.3f;
        style->ScrollbarRounding = 2;
        style->WindowTitleAlign = ImVec2(0.5, 0.5);
        style->WindowMinSize = ImVec2(500, 200);
        style->FramePadding = ImVec2(10, 8);

        style->Colors[ImGuiCol_Text]                  = ImVec4(0.90f, 0.90f, 0.90f, 0.90f);
        style->Colors[ImGuiCol_TextDisabled]          = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
        style->Colors[ImGuiCol_WindowBg]              = ImColor(20, 20, 20, 255);
        style->Colors[ImGuiCol_ChildBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style->Colors[ImGuiCol_PopupBg]               = ImVec4(0.05f, 0.05f, 0.10f, 0.85f);
        style->Colors[ImGuiCol_Border]                = ImVec4(0.70f, 0.70f, 0.70f, 0.65f);
        style->Colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

        style->Colors[ImGuiCol_FrameBg]               = ImColor(37, 36, 37, 255);
        style->Colors[ImGuiCol_FrameBgActive]         = ImColor(37, 36, 37, 255);
        style->Colors[ImGuiCol_FrameBgHovered]        = ImColor(37, 36, 37, 255);

        style->Colors[ImGuiCol_TitleBg]               = ImColor(0, 150, 255, 255);
        style->Colors[ImGuiCol_TitleBgActive]         = ImColor(0, 150, 255, 255);
        style->Colors[ImGuiCol_TitleBgCollapsed]      = ImColor(0, 0, 0, 80);

        style->Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.01f, 0.01f, 0.02f, 0.80f);
        style->Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.20f, 0.25f, 0.30f, 0.60f);
        style->Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.55f, 0.53f, 0.55f, 0.51f);
        style->Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.56f, 0.56f, 0.56f, 0.91f);
        style->Colors[ImGuiCol_CheckMark]             = ImVec4(0.90f, 0.90f, 0.90f, 0.83f);
        style->Colors[ImGuiCol_SliderGrab]            = ImVec4(0.70f, 0.70f, 0.70f, 0.62f);
        style->Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.30f, 0.30f, 0.30f, 0.84f);

        style->Colors[ImGuiCol_Separator]             = ImColor(70, 70, 70, 255);
        style->Colors[ImGuiCol_SeparatorActive]       = ImColor(76, 76, 76, 255);
        style->Colors[ImGuiCol_SeparatorHovered]      = ImColor(76, 76, 76, 255);

        style->Colors[ImGuiCol_Button]                = ImColor(31, 30, 31, 255);
        style->Colors[ImGuiCol_ButtonActive]          = ImColor(0, 150, 255, 255);
        style->Colors[ImGuiCol_ButtonHovered]         = ImColor(0, 150, 255, 255);

        style->Colors[ImGuiCol_Header]                = ImColor(0, 0, 0, 0);
        style->Colors[ImGuiCol_HeaderActive]          = ImColor(0, 0, 0, 0);
        style->Colors[ImGuiCol_HeaderHovered]         = ImColor(46, 46, 46, 255);

        style->Colors[ImGuiCol_ResizeGrip]            = ImVec4(1.00f, 1.00f, 1.00f, 0.85f);
        style->Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
        style->Colors[ImGuiCol_ResizeGripActive]      = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
        style->Colors[ImGuiCol_PlotLines]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
        style->Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.00f, 0.00f, 1.00f, 0.35f);

        style->ScaleAllSizes(std::max(1.0f, density / 150.0f));
        style->ScrollbarSize /= 1;

        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");

        ImGuiIO &io = ImGui::GetIO();

        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

        static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
        ImFontConfig icons_config;

        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;

        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;

        io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 20.f, &CustomFont);
        io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 20.0f, &icons_config, icons_ranges);

        ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 20.0f);
        io.Fonts->AddFontDefault(&cfg);

        memset(&Config, 0, sizeof(sConfig));

        Config.ColorsESP.Text = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.LinePlayer = CREATE_COLOR(150, 152, 20, 255);
        Config.ColorsESP.Box = CREATE_COLOR(100, 255, 000, 255);
        Config.ColorsESP.Skeleton = CREATE_COLOR(100, 190, 000, 255);
        Config.ColorsESP.Linebot = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Boxbot = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Skeletonbot = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Distance = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Name = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Count = CREATE_COLOR(0, 255, 100, 255);



        Config.Skeleton = 0.5f;
        Config.Line = 0.5f;
        Config.Fov = 1.5f;
        initImGui = true;
    }
    ImGuiIO &io = ImGui::GetIO();

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();

    DrawESP(ImGui::GetBackgroundDrawList());
    ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.37f, (float) glHeight * 0.53f),ImGuiCond_Once); // 45% width 70% height

    if (ImGui::Begin(OBFUSCATE(ICON_FA_BOMB"PUBGM 2.6.0  64 BIT"), 0,ImGuiWindowFlags_NoBringToFrontOnFocus))
    {

        ImGui::Columns(2);
        ImGui::SetColumnOffset(1, 245);
        {
            static ImVec4 active = ImguiPP::to_vec4(0, 150, 255, 255);
            static ImVec4 inactive = ImguiPP::to_vec4(31, 30, 31, 255);

            ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 1 ? active : inactive);
            if (ImGui::Button(ICON_FA_GAMEPAD " ESP Player", ImVec2(25 * 8, 60)))
                Settings::Tab = 1;
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? active : inactive);
            if (ImGui::Button(ICON_FA_GAMEPAD " Esp Colour", ImVec2(25 * 8, 60)))
                Settings::Tab = 2;
        }
        ImGui::NextColumn();
        if (Settings::Tab == 1) {
            ImGui::Spacing();
            ImGui::Text("Esp Visuals :");
            ImGui::Spacing();
            ImGui::Checkbox("SHOW-LINE", &Config.ESPMenu.Line);
            ImGui::SameLine();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit3("##LineCol Player ", Config.ColorsESP.LinePlayer, //done
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Text("LINE BOT MODE ");
            static const char *gets[] = {"NO LINE","TOP","MID","BOTTOM"};
            ImGui::Combo("##Target By", (int *) &Config.ESPMenu.By, gets, 4, -1);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Text("LINE PLAYER MODE");
            ImGui::Combo("##Target Tar", (int *) &Config.ESPMenu.Tar, gets, 4, -1);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox("SHOW-BOX", &Config.ESPMenu.Box);
            ImGui::SameLine();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit3("##BoxBotCol Player", Config.ColorsESP.Box,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox("SHOW-SKELETON", &Config.ESPMenu.Skeleton);
            ImGui::SameLine();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit3("##Skeleton Player", Config.ColorsESP.Skeleton,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox("SHOW-NAME", &Config.ESPMenu.Name);
            ImGui::SameLine();
            ImGui::Checkbox("SHOW-DISTANCE", &Config.ESPMenu.Distance);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox("SHOW-HEALTH", &Config.ESPMenu.Health);
            ImGui::SameLine();
            ImGui::Checkbox("SHOW-BREATH", &Config.ESPMenu.ShowKnockedHealth);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox("TEAM-ID", &Config.ESPMenu.TeamID);
            ImGui::SameLine();
            ImGui::Checkbox("HIDE-BOT", &Config.ESPMenu.NoBot);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox(ICON_FA_BOMB" GRENADE-WARN", &Config.ESPMenu.Grenade);
            ImGui::SameLine();
            ImGui::Checkbox(ICON_FA_DROPBOX" LOOT-BOX", &Config.ESPMenu.LootBox);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Checkbox(ICON_FA_CAR" SHOW VEHICLE", &Config.VehicleESP.ShowVehicle);
            ImGui::SameLine();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit3("Vehicle Text Color", Config.ColorsESP.Vehicle,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
            ImGui::TableNextColumn();
            ImGui::Spacing();
            ImGui::Text("VEHICLE Visuals :");
            ImGui::Spacing();
            ImGui::TableNextColumn();
            ImGui::Checkbox(ICON_FA_CAR" Vehicle Distance",&Config.VehicleESP.Vehicle);
            ImGui::SameLine();
            ImGui::Checkbox(ICON_FA_CAR" Vehicle Fuel",&Config.VehicleESP.VehicleFuel);
            ImGui::Spacing();
            ImGui::Checkbox(ICON_FA_CAR" Vehicle HP",&Config.VehicleESP.VehicleHP);
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::Spacing();

        } else if (Settings::Tab == 2) {
            ImGui::Spacing();
            static int e = 0;
            ImGui::RadioButton("Old Theme Imgui", &e, 1);
            ImGui::SameLine();
            ImGui::RadioButton("Default Theme Imgui", &e, 2);
            switch (e) {
                case 1:
                    ImGui::StyleColorsClassic();
                    break;
                case 2:
                    ImGui::StyleColorsDark();
                    break;
            }
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::Text("Menu Text Color :");
            ImGui::Spacing();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit4("##Text Colour", Config.ColorsESP.Text,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
            ImGui::PushStyleColor(ImGuiCol_Text, ToColor(Config.ColorsESP.Text));
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::TextColored(ImVec4(0, 0.88f, 0.73f, 1.00f), "Esp Customize :");
            ImGui::SliderFloat("Line Thickness + BOX Thickness", &Config.Line, 0.2f, 20.0f); // done
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::SliderFloat("Skeleton Thickness", &Config.Skeleton, 0.2f, 20.0f); // done
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::TextColored(ImVec4(0, 0.88f, 0.73f, 1.00f), "Esp Customize :");
            ImGui::SliderFloat("Fov Thickness", &Config.Fov, 0.2f, 20.0f); // done
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::Text("Enemy Count Color :");
            ImGui::Spacing();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),ImGuiCond_Once);  // done
            ImGui::ColorEdit4("##CountCol", Config.ColorsESP.Count,ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel); //done
            ImGui::Spacing();
            //BOT ESP COLOUR
            ImGui::TextColored(ImVec4(0, 0.88f, 0.73f, 1.00f), "Esp Colour :");
            ImGui::Text("Bot Line Color");
            ImGui::Spacing();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once); //done
            ImGui::ColorEdit3("##LineBotCol", Config.ColorsESP.Linebot,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::Text("Box Color Bot");
            ImGui::Spacing();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit3("##BoxBotCol", Config.ColorsESP.Boxbot,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
            ImGui::Spacing();
            ImGui::Spacing();
            ImGui::Text("Skeleton Color Bot");
            ImGui::Spacing();
            ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f),
                                     ImGuiCond_Once);
            ImGui::ColorEdit4("##SkeletonbotCol", Config.ColorsESP.Skeletonbot,
                              ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
            ImGui::Spacing();
            ImGui::Spacing();
        }
    }
    ImGui::End();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    return orig_eglSwapBuffers(dpy, surface);
}

void *main_thread(void *) {
    ProcMap libtersafe;do {
        libtersafe = KittyMemory::getLibraryMap("libUE4.so");
        sleep(1);
    }
    while
            (!libtersafe.isValid());sleep(1);
    UE4 = Tools::GetBaseAddress("libUE4.so");
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }
    ANOGS = Tools::GetBaseAddress("libanogs.so");
    while (!ANOGS) {
        ANOGS = Tools::GetBaseAddress("libanogs.so");
        sleep(1);
    }
    while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
    }

    while (!g_App->onInputEvent)
        sleep(1);

    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;

    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

    void *egl = dlopen_ex("libEGL.so", 4);
    while (!egl) {
        egl = dlopen_ex("libEGL.so", 4);
        sleep(1);
    }
    void *addr = dlsym_ex(egl, "eglSwapBuffers");
    HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
    dlclose_ex(egl);
    return 0;
}
__attribute__((constructor)) void _init() {
    pthread_t t;
    pthread_create(&t, 0, main_thread, 0);
}
