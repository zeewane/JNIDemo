#include <stdio.h>
#include "com_github_zeewane_jni_JavaNative.h"

/*
 * Class:     com_github_zeewane_jni_JavaNative
 * Method:    helloJNI
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_zeewane_jni_JavaNative_helloJNI
  (JNIEnv * env, jobject jobj) 
  {
   	printf("hello jni!");
  } 
