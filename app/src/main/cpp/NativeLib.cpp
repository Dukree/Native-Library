#include <jhi.h>
#include <libCipherLabTCP8.so>
#include <libCipherLabTCP8_x86_64.so>

extern "C" JNIEXPORT void JNICALL
Java_com.max.nativelibrary_MainActivity_GetSerial(
JNIEnv* env,
jobject){
return GetSerial;
}
// Created by under on 10.09.2021.
//

