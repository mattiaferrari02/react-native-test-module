#include <jni.h>
#include "react-native-test-module.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_testmodule_TestModuleModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return testmodule::multiply(a, b);
}
