#include <iostream>
#include "Product.h"

using namespace std;

Product makeProduct(int k, double m)
{
	Product p;
	if (!p.Init(k, m))
		cout << "Wrong value!" << endl;
	return p;
}

int main()
{
	Product p;
	p.Read();
	p.Display();

	int k;
	double m;
	cout << " Your value must be more than 0!" << endl << endl;
	cout << " Input value:" << endl << endl;
	cout << " Calories = "; cin >> k;
	cout << " Mass = "; cin >> m;
	cout << " Power = " << p.Power() << endl;
	cout << endl;
	p = makeProduct(k, m);
	p.Display();

	return 0;
}