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
		cout << "�������� ������� ������:" << endl;
		cout << "1. ���� ������ � ����" << endl;
		cout << "2. ������� ����� �� ������� abcdefgh" << endl;

		cin >> number;
		switch (number)
		{
			case 1:
			{
				fout.open(path, ofstream::app);

				if (!fout.is_open())
				{
					cout << "������ �������� �����" << endl;
				}
				else
				{
					cout << "���� " << path << " ������. ������� ������: " << endl;
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
					cout << "������ �������� �����" << endl;
				}
				else
				{
					cout << "���� " << path << " ������." << endl;
					string str;

					while (!fin.eof())
					{
						str = "";
						getline(fin, str);
						if (str == "abcdefgh")
						{
							cout << "abcdefgh ������" << endl;
						}
						else cout << "abcdefgh �� ������" << endl;

					}

				}

				fin.close();
			}
		}
	}
}