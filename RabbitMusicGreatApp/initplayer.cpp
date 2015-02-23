#include "stdafx.h"
#include "initplayer.h"
#include <iostream>
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
	std::cout << "Initialization...";
	if (BASS_Init(deviceNumber, soundFreq, initFlags, windowNumber, NULL) == true)
	{
		BASS_Init(deviceNumber, soundFreq, initFlags, windowNumber, NULL);
		std::cout << "OK" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
		printf("Error! Can't initialize!\n");
	}
}

void bassiniter::checkbassversion()
{
	std::cout << "Checking bass version...";
	if (HIWORD(BASS_GetVersion()) != BASSVERSION)
	{
		std::cout << "NO" << std::endl;
		std::cout << "!You have an outdated version of bass!\nDo you want to update your player(y/n): ";
		char updateDesision = 'x';
		bool changeFlag = false;
		while (changeFlag != true)
		{
			std::cin >> updateDesision;
			switch (updateDesision)
			{
			case 'y':
				bassupdate();
				changeFlag = true;
				break;
			case 'n':
				changeFlag = true;
				break;
			default:
				std::cout << "Error! You must input only between (y/n): ";
				updateDesision = NULL;
				break;
			}
		}
	}
	else
	{
		std::cout << "OK" << std::endl;
	}
}

void bassiniter::bassupdate()
{
	std::cout << "Updating bass...";
}

void bassiniter::stopbass()
{
	std::cout << "Stoping bass...";
	BASS_Free();
	std::cout << "OK";
}