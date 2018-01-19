//
// Created by joy on 18-1-19.
//
#include <jni.h>

#ifndef NDKTEST_DYNAMIC_H
#define NDKTEST_DYNAMIC_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL addTwoNumber
        (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif


#endif //NDKTEST_DYNAMIC_H
