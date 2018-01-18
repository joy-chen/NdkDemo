LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := test

LOCAL_C_INCLUDES += \
    $(LOCAL_PATH)
LOCAL_EXPORT_C_INCLUDES := \
      $(LOCAL_PATH)

LOCAL_LDLIBS += -llog


LOCAL_SRC_FILES := test.c

include $(BUILD_SHARED_LIBRARY)