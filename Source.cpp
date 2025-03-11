#include <iostream>
#include "square.h"

using namespace std;

int main()
{
	Kvadrat kvadrat;
	cout << "Input coordinates of square: " << endl;
	kvadrat.Read();
	kvadrat.Display();
	cout << "P= " << kvadrat.Perymetr() << endl;
	cout << "S= " << kvadrat.Square() << endl;
	cout << "Side= " << kvadrat.Side() << endl;

	return 0;
}