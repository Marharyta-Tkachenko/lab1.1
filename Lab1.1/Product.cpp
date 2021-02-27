#include "Product.h"
#include <iostream>

using namespace std;

void Product::SetFirst(int value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Product::SetSecond(double value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

bool Product::Init(int k, double m)
{
	if (k > 0 && m > 0)
	{
		SetFirst(k);
		SetSecond(m);
		return true;
	}
	else
		return false;
}

void Product::Read()
{
	int k;
	double m;
	do
	{
		cout << " Your value must be more than 0!" << endl;
		cout << "Input value:" << endl;
		cout << " Calories = "; cin >> k;
		cout << " Mass = "; cin >> m;
	} while (!Init(k, m));
}

void Product::Display() const
{
	cout << endl;
	cout << " Calories = " << first << endl;
	cout << " Mass = " << second << endl;
}

double Product::Power() 
{
	return first * second * 10;
}

