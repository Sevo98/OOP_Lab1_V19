#include <iostream>
#include "Composition.h"
#include <cmath>
#include <ctime>

using namespace std;

void Composition()
{
	srand(time(NULL));
	cout << "Введите размер массива: " << endl;
	int length;
	cin >> length;
	int size = length + 4;
	int* arr = new int[size];
 
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << "Значение массива:" << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	} cout << endl;
	
	int sum_arr = 0;
	for (int i = 0; i < length; i++)
	{
		sum_arr = sum_arr + arr[i];
	}
	cout << "Сумма элементов массива равна " << sum_arr << endl;
	delete[] arr;
}