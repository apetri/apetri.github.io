////////////*myfunc.h*////////////////
#ifndef __MYFUNC_H
#define __MYFUNC_H

#ifdef _MYFUNC_IS_CPP
extern "C" void myfunction(int x, .....);

#else
void myfunction(int x, .....);

#endif


#endif

/////////////*myfunc.cpp*///////////////
#define _MYFUNC_IS_CPP

#include "myfunc.h"

extern "C" void myfunction(int x,...){
	//Function body, can have C++ library calls (e.g. openCV) etc...
}

#undef _MYFUNC_IS_CPP