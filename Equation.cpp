#include <iostream>
#include "Equation.h"
#include <cmath>

using namespace std;


int Equation()
{
	int n;
	cout << "������� ����� n" << endl;
	cin >> n;
	double s = 0;
	double result = 0;
	for (int i = 1; i <= n; i++)
	{
		s += sin((double)i);
		result += 1.0 / s;
	}
	cout << "���������: " << result << endl;
	return 0;
}