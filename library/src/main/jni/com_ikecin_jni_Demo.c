#include "log.h"
#include "com_ikecin_jni_Demo.h"

/*
 * Class:     com_ikecin_jni_Test
 * Method:    methodA
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ikecin_jni_Demo_methodA (JNIEnv *env, jclass class) {
    LOGI("jni call ok");
    return (*env)->NewStringUTF(env, "jni call ok");
}
