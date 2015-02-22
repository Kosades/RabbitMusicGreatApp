#include "stdafx.h"
#include "initplayer.h"
#include "bass.h"
#pragma comment (lib, "bass")

bassiniter::bassiniter(int device, int freq, int flags, HWND window)
{
	deviceNumber = device;
	soundFreq = freq;
	initFlags = flags;
	windowNumber = window;
}

bassiniter::~bassiniter()
{
	printf("Goodbye ^_^\n");
	BASS_Free();
}

void bassiniter::runbass()
{
	if (BASS_Init(deviceNumber, soundFreq, initFlags, windowNumber, NULL) == true)
	{
		BASS_Init(deviceNumber, soundFreq, initFlags, windowNumber, NULL);
		printf("Initialized...\n");
	}
	else
	{
		printf("Error! Can't initialize!\n");
	}
}

void bassiniter::stopbass()
{
	BASS_Free();
}