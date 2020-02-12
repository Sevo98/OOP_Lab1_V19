//#include "stdafx.h"
#include <iostream>
#include "Work_with_file.h"
#include <fstream>
#include <string>

using namespace std;

void WorkWithFile()
{
	string path = "f.txt";
	string data;
	ofstream fout;
	while (true)
	{
		int number = 0;
		cout << "Выберите вариант работы:" << endl;
		cout << "1. Ввод данных в файл" << endl;
		cout << "2. Провека файла на наличие abcdefgh" << endl;

		cin >> number;
		switch (number)
		{
			case 1:
			{
				fout.open(path, ofstream::app);

				if (!fout.is_open())
				{
					cout << "Ошибка открытия файла" << endl;
				}
				else
				{
					cout << "Файл " << path << " открыт. Введите данные: " << endl;
					cin >> data;
					fout << "\n";
					fout << data;
				}

				fout.close();
			}
			break;

			case 2:
			{
				ifstream fin;

				fin.open(path);
				if (!fin.is_open())
				{
					cout << "Ошибка открытия файла" << endl;
				}
				else
				{
					cout << "Файл " << path << " открыт." << endl;
					string str;

					while (!fin.eof())
					{
						str = "";
						getline(fin, str);
						if (str == "abcdefgh")
						{
							cout << "abcdefgh найден" << endl;
						}
						else cout << "abcdefgh не найден" << endl;

					}

				}

				fin.close();
			}
		}
	}
}