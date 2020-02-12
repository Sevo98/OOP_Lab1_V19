#include <iostream>
#include "Menu.h"
#include "Equation.h"
#include "Composition.h"
#include "Work_with_file.h"

using namespace std;

void menu()
{
	while (true) 
	{
		int number = 0; 
		cout << "Выберите задание:" << endl;
		cout << "1. Дано натуральное n. Вычислить: (1/sin*1)+(1/sin*1+sin*2)+(1/sin*1+...sin*n)" << endl;
		cout << "2. Написать функцию вычисления произведения элементов массива." << endl;
		cout << "3. Дан символьный файл f. Определить входит ли в файл сочетание 'abcdefgh' " << endl;

		cin >> number; 
		switch (number)
		{
			case 1: 
			{
				Equation();
			}
			break;
			
			case 2:
			{
				Composition();
			}
			break;

			case 3:
			{
				WorkWithFile();
			}
		} 
	}
	
}