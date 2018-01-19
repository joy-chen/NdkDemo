//
// Created by joy on 18-1-19.
//

#include "dynamic.h"

#ifdef __cplusplus
extern "C" {
#endif

// 注册类
static const char *className = "com/example/joy/ndktest/JniLoader";

//注册方法
static JNINativeMethod gJni_Methods_DynamicTest[] = {
        {"doTwo", "(II)I", (void*)addTwoNumber},
};

JNIEXPORT jint JNICALL addTwoNumber(JNIEnv *env, jobject, jint param1, jint param2) {
    return param1 + param2;
}

static int jniRegisterNativeMethods(JNIEnv* env, const char* className, const JNINativeMethod* gMethods, int numMethods)
{
    jclass clazz;

    clazz = (env)->FindClass( className);
    if (clazz == NULL) {

        return -1;
    }
    int result = 0;
    if ((env)->RegisterNatives(clazz, gMethods, numMethods) < 0) {

        result = -1;
    }
    (env)->DeleteLocalRef(clazz);
    return result;
}

//库加载时调用
jint JNI_OnLoad(JavaVM* vm, void* reserved){
    JNIEnv* env = NULL;
    jint result = -1;

    if (vm->GetEnv((void**) &env, JNI_VERSION_1_6) != JNI_OK) {
        return result;
    }

    //动态注册一
    jniRegisterNativeMethods(env, className, gJni_Methods_DynamicTest, sizeof(gJni_Methods_DynamicTest) / sizeof(JNINativeMethod));

    return JNI_VERSION_1_6;
}

#ifdef __cplusplus
}
#endif