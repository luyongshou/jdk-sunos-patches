$NetBSD$

Support SunOS/gcc.

--- make/autoconf/toolchain.m4.orig	2019-01-08 12:44:56.000000000 +0000
+++ make/autoconf/toolchain.m4
@@ -39,7 +39,7 @@ VALID_TOOLCHAINS_all="gcc clang solstudi
 
 # These toolchains are valid on different platforms
 VALID_TOOLCHAINS_linux="gcc clang"
-VALID_TOOLCHAINS_solaris="solstudio"
+VALID_TOOLCHAINS_solaris="gcc solstudio"
 VALID_TOOLCHAINS_macosx="gcc clang"
 VALID_TOOLCHAINS_aix="xlc"
 VALID_TOOLCHAINS_windows="microsoft"
