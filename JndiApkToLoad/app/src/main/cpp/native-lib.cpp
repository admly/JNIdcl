#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_a_JNIDynamicCodeLoading_LoaderCallable_stringFromJNI(
        JNIEnv *env,
        jclass type) {
    std::string hello = "String loaded from C++ class";
    return env->NewStringUTF(hello.c_str());
}
