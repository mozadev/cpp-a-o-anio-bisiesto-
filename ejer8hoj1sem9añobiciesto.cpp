// ConsoleApplication1.cpp : main project file.
/*
Realice un programa que permita dibujar un círculo con círculos concéntricos.*/

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;

bool EsBisiesto(int &a)
{
	if ((a % 4 == 0 || a % 400 == 0) && (a %100 != 0))
		return true;
	else
		return false;
}
int main()
{
	int anio;
	cout << "ingrese anio: "; cin >> anio;
	if (EsBisiesto(anio) == true)
		cout << "es biciesto";
	else
		cout<<"no es biciesto";

		_getch();
}
