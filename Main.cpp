#include "stdafx.h"
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "CarG.h"

using namespace std;

int main()
{
	CarG a1;
	char kbh;
	do
	{
		system("cls");
		a1.frame();
		a1.gotoxy(20, 21);
		a1.car(0);
		_getch();
		kbh = a1.cfun();
	} while (kbh != 'q');

	a1.gotoxy(66, 27);
	return 0;
}