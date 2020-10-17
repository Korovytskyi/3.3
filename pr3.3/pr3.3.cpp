// pr3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_03_3.cpp
// < Коровицький Тарас >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -R)
		y = ((R*(-1*R))/R)+R;
	else 
		if (x > -R && x <= 0)
			y = sqrt ((R*R)-(x*x));
		else
			if (x > 0 && x <= 6)
				y = ((-1*R)*x)/6 ;
			      else
					y =(R*(x-6))/6;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}