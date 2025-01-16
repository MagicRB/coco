.PHONY : all
all : Inlining.so LICM.so InstCombine.so ADCE.so
COMPILE="../framework/utils/compile-pass.sh"

CC ?= clang
CXX ?= clang++

setenv: export CC=$(CC) CXX=$(CXX)

ADCE.so: ADCE.cpp setenv
	${COMPILE} ADCE.cpp ADCE.so

Inlining.so: Inlining.cpp setenv
	${COMPILE} Inlining.cpp Inlining.so

LICM.so: LICM.cpp setenv
	${COMPILE} LICM.cpp LICM.so

InstCombine.so: InstCombine.cpp setenv
	${COMPILE} InstCombine.cpp InstCombine.so
