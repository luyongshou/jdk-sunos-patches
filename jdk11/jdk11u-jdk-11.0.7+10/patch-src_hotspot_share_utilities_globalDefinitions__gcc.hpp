$NetBSD$

Fix build on SunOS.

--- src/hotspot/share/utilities/globalDefinitions_gcc.hpp.orig	2019-01-08 12:44:55.000000000 +0000
+++ src/hotspot/share/utilities/globalDefinitions_gcc.hpp
@@ -62,6 +62,7 @@
 #include <sys/procset.h>
 #include <ucontext.h>
 #include <setjmp.h>
+#include <inttypes.h>
 #endif // SOLARIS
 
 # ifdef SOLARIS_MUTATOR_LIBTHREAD
