$NetBSD$

Support SunOS/gcc. XXX!

--- src/jdk.crypto.ec/share/native/libsunec/ECC_JNI.cpp.orig	2019-01-08 09:40:35.000000000 +0000
+++ src/jdk.crypto.ec/share/native/libsunec/ECC_JNI.cpp
@@ -39,6 +39,8 @@
 
 extern "C" {
 
+#define B_TRUE	_B_TRUE
+#define B_FALSE	_B_FALSE
 /*
  * Declare library specific JNI_Onload entry if static build
  */
