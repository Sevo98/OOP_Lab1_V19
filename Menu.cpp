#include <iostream>
#include "Menu.h"
#include "Equation.h"

using namespace std;

void menu()
{
	while (true) 
	{
		int number = 0; 
		cout << "�������� �������:" << endl;
		cout << "1. ���� ����������� n. ���������: (1/sin*1)+(1/sin*1+sin*2)+(1/sin*1+...sin*n)" << endl;
		cout << "2. �������� ������� ���������� ������������ ��������� �������." << endl;
		cout << "3. ��� ���������� ���� f. ���������� ������ �� � ���� ��������� 'abcdefgh' " << endl;

		cin >> number; 
		switch (number)
		{
			case 1: 
			{
				Equation();
			}
			break;

			case 0:
			{
				system("exit");
			}
		} 
	}
	
}