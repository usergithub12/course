#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <conio.h>
#include <string>
using namespace std;

class MainMenu
{

public:
	MainMenu();
	int Menu();
	void SetColor(int col);
	void SetPos(int x, int y);
	~MainMenu();
};

