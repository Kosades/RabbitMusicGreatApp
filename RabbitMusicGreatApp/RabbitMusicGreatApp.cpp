// RabbitMusicGreatApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "initplayer.h"
#include <cstdlib>
#include <iostream>
#include <clocale>
//#include "bass.h"
//#pragma comment (lib, "bass")


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "en");

	bassiniter player(-1, 44100, 0, 0);
	player.runbass();

	system("pause");
	player.stopbass();
	return 0;
}

