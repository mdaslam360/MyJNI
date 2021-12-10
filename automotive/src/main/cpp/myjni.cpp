#include <jni.h>
#include <ctype.h>
#include <string.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_scania_myjni_MainActivity_getName(JNIEnv *env, jobject thiz, jstring string) {

    const char *str = env->GetStringUTFChars(string, 0);
    char cap[128];
    strcpy(cap, str);
    env->ReleaseStringUTFChars(string, str);

    return env->NewStringUTF(cap);
}
