//
// Created by joy on 18-1-18.
//

#include <string.h>
#include <jni.h>
#include "basic.h"

extern "C" {

JNIEXPORT jstring  JNICALL Java_com_example_joy_ndktest_JniLoader_getHelloString
        (JNIEnv *env, jobject _this) {
    test(); //locallib
    return env->NewStringUTF((char *)"hello joy");
}

}