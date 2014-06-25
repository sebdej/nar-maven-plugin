#include <stdio.h>
#include "it0005_HelloWorldStaticJNI.h"

JNIEXPORT jstring JNICALL Java_it0005_HelloWorldStaticJNI_sayHello( JNIEnv *env, jobject obj ) {
	jstring value;           /* the return value */

	char buf[40];            /* working buffer (really only need 20 ) */


	sprintf ( buf, "%s", "Hello Static NAR World!" );

	value = (*env)->NewStringUTF( env, buf );

	return value;
}

