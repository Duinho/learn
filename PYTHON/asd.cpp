#include "stdafx.h"
#include "window.h"
#include "util.h"
#include <stdio.h>
#include <stdlib.h>


#ifdef _MANAGED
#pragma managed(push, off)
#endif

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
    return TRUE;
}

#ifdef _MANAGED
#pragma managed(pop)
#endif


void _tmain()
{
	int z;
	HBITMAP hbmp = LoadPicture("c:\\Users\\magic\\Desktop\\test.jpg",0,0,z,0,0);
	char *answer="";
	answer = ImageSearch(0,0,1024,768,"c:\\Users\\magic\\Desktop\\test.jpg");
	return;
}
