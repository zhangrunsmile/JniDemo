/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class xsf_jnidemo_NDKUtils */

#ifndef _Included_xsf_jnidemo_NDKUtils
#define _Included_xsf_jnidemo_NDKUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     xsf_jnidemo_NDKUtils
 * Method:    getVipString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_xsf_jnidemo_NDKUtils_getVipString
  (JNIEnv *, jobject);

/*
 * Class:     xsf_jnidemo_NDKUtils
 * Method:    generateKey
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_xsf_jnidemo_NDKUtils_generateKey
  (JNIEnv *, jobject, jstring);

/*
 * Class:     xsf_jnidemo_NDKUtils
 * Method:    dynamicGenerateKey
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
/*JNIEXPORT jstring JNICALL Java_xsf_jnidemo_NDKUtils_dynamicGenerateKey
  (JNIEnv *, jobject, jstring);*/
//动态调用Jni
JNIEXPORT jstring JNICALL native_dynamic_key(JNIEnv *env, jobject obj, jstring name);

#ifdef __cplusplus
}
#endif
#endif
