PROJ_PATH	:= $(call my-dir)
include $(CLEAR_VARS)
include $(PROJ_PATH)/locallib/Android.mk
include $(PROJ_PATH)/jni2java/Android.mk
include $(PROJ_PATH)/jni_dynamic/Android.mk
