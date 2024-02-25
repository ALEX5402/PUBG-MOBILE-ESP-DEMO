LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libdobby
LOCAL_SRC_FILES := Dobby64/libdobby.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := v1

LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all, -llog
LOCAL_ARM_MODE := arm

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_SRC_FILES 		:=  main.cpp \
Tools.cpp \
adroid_app.c \
fake_dlfcn.cpp \
base64/base64.cpp \
plthook_elf.cpp  \
imgui/imgui.cpp \
imgui/imgui_draw.cpp\
imgui/imgui_demo.cpp \
KittyMemory/KittyMemory.cpp \
KittyMemory/MemoryPatch.cpp \
KittyMemory/MemoryBackup.cpp \
KittyMemory/KittyUtils.cpp \
imgui/imgui_tables.cpp \
imgui/imgui_widgets.cpp \
imgui/backends/imgui_impl_android.cpp \
imgui/backends/imgui_impl_opengl3.cpp \
SDK/PUBGM_Basic.cpp \
SDK/PUBGM_Basic_functions.cpp \
SDK/PUBGM_CoreUObject_functions.cpp \
SDK/PUBGM_Engine_functions.cpp \
SDK/PUBGM_ShadowTrackerExtra_functions.cpp \
SDK/PUBGM_Client_functions.cpp \

LOCAL_CPP_FEATURES                      := exceptions
LOCAL_LDLIBS                            := -llog -landroid -lEGL -lGLESv2 -lGLESv3 -lGLESv1_CM -lz
LOCAL_STATIC_LIBRARIES					:= libdobby
include $(BUILD_SHARED_LIBRARY)
