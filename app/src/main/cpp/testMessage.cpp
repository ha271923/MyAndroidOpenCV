#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_sample_hawk_myandroidopencv_MainActivity_getTestStringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hawk Native C++";
    return env->NewStringUTF(hello.c_str());
}
