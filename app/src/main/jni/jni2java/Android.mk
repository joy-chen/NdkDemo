LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := firstndk

LOCAL_SRC_FILES := JniLoaderndk.cpp
LOCAL_SHARED_LIBRARIES := test

include $(BUILD_SHARED_LIBRARY)