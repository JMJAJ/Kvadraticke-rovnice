//#include "pch.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;

long double a = 0, b = 0, c = 0, d = 0, resA = 0, resB = 0;
int choice = 0;
int D, x1, x2, x3;
double znam1 = 0, znam2 = 0, znam3 = 0;

void mainm();
void rce();
void res();


int main()
{
	mainm();
	rce();
	res();

	printf("\n\n\n\n\n");

	return 0;
}

void mainm()
{
	printf("Kvadraticka rovnice:...\n\n");
}


void rce()
{
	cout << "Zadej a pro x2" << endl
		<< "--> ";
	cin >> a;

	cout << "Zadej b pro x1" << endl
		<< "--> ";
	cin >> b;

	cout << "Zadej c pro x0" << endl
		<< "--> ";
	cin >> c;

	cout << "Rovince po zadani vypada takto:" << endl
		<< "(+/-) " << a << "*x^2 (+/-) " << b << "*x^1 (+/-) " << c << " = " << d;

	printf("\n\n");
	system("pause");
	printf("\n\n");

	cout << "1 ... +\n2 ... -" << endl;
	printf("Jake ma byt prvni znamenko: ");
	cin >> choice;

	switch (choice)
	{
	case 1:
		znam1 = +1;
		break;

	case 2:
		znam1 = -1;
		break;
	}

	cout << "1 ... +\n2 ... -" << endl;
	printf("Jake ma byt druhe znamenko: ");
	cin >> choice;

	switch (choice)
	{
	case 1:
		znam2 = +1;
		break;

	case 2:
		znam2 = -1;
		break;
	}

	cout << "1 ... +\n2 ... -" << endl;
	printf("Jake ma byt treti znamenko: ");
	cin >> choice;

	switch (choice)
	{
	case 1:
		znam3 = +1;
		break;

	case 2:
		znam3 = -1;
		break;
	}


	cout << "Rovince po zadani vypada takto:" << endl
		<< znam1 * a << "*x^2 " << znam2 * b << "*x^1 " << znam3 * c << " = " << d;

}

void res()
{
	cout << "\n\nTak jdeme to vypocitat:...\n" << endl;

	a = znam1 * a;
	b = znam2 * b;
	c = znam3 * c;

	D = (pow(b, 2) - 4*a*c);

	x3 = sqrt(D);


	if (D > 0)
	{
		resA = ((-b + x3) / (2 * a));
		resB = ((-b - x3) / (2 * a));


		cout << "Vysledek je, ze x1 a x2 jsou:" << endl
			<< "x1 = " << resA << endl
			<< "x2 = " << resB << endl;
		cout << "\nK = {" << resA << ", " << resB << "}";
	}
	else if (D < 0)
	{
		system("cls");
		cout << "x neexistuje" << endl;
		cout << "Vysledek je, ze x neexistuje\n\n";
		cout << "K = {}";
	}
	else
	{

	}

	if (D == 0)
	{
		resA = ((-b) / (2 * a));
		cout << "Vysledek je, ze x je" << resA <<endl;
		cout << "\nK = {" << resA << "}";
	}
	else if (D < 0)
	{
		system("cls");
		cout << "x neexistuje" << endl;
		cout << "Vysledek je, ze x neexistuje\n\n";
		cout << "K = {}";
	}
	else
	{

	}


}