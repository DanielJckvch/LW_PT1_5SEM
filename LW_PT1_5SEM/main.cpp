#include <iostream>
#include "Keeper.h"
#include "Motorcycle.h"
#include "Automobile.h"
#include "Bus.h"
#include "Place.h"
#include "Garage.h"
#define FIELDSIZE 15
using namespace std;
//Файлы-609-ая стр. НАПИСАТЬ ЗАДАНИЕ ЗДЕСЬ, СДЕЛАТЬ ТИТУЛЬНЫЕ К ОТУ И ТПР
//ПРОВЕРИТЬ НАЛИЧИЕ ДРУГИХ БАГОВ, ПОДСТРОИТЬ ПОД ДОП ТРЕБОВАНИЯ
//Доп. фичи: текстовые файлы, вставка с конца и в опред место, копирование эл-та, поиск эл-тов по ключ словам, очистка всего, пароль
//Исправить: реверсное задание списка, 
//В ФОРМАЛИЗАЦИИ ЗАПИСАТЬ ФОРМАТ
int main(void)
{

	char* s1;
	char* s2;
	char* s3;
	char* s4;
	char* s5;
	char* filename;
	try
	{
		s1 = new char[FIELDSIZE];
		s2 = new char[FIELDSIZE];
		s3 = new char[FIELDSIZE];
		s4 = new char[FIELDSIZE];
		s5 = new char[FIELDSIZE];
		filename = new char[50];
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}
	garage* g_ptr = nullptr;
	keeper cont1;
	int mode = 0;
	int num = 0;
	char buffErr[] = "Error of the input buffer";
	do
	{
		cout << endl;
		cout << "Enter the processing mode: 0 - exit, 1 - add a motocycle, 2 - add an automobile, 3 - add a bus, 4 - change an object, 5 - delete an object, 6 - show all list, 7 - load data to a file, 8 - load data from a file." << endl;
		try
		{
			cin >> mode;
			if (cin.bad() || cin.fail())
			{
				throw buffErr;
			}
		}
		catch (char*)
		{
			exit(1);
		}
		cout << endl;
		switch (mode)
		{
		case 1:
			cout << "Enter a mark:" << endl;
			try
			{
				cin >> s1;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a model:" << endl;
			try
			{
				cin >> s2;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a engine size:" << endl;
			try
			{
				cin >> s3;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a engine capability:" << endl;
			try
			{
				cin >> s4;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a terrain:" << endl;
			try
			{
				cin >> s5;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			try
			{
				g_ptr = new motorcycle;
			}
			catch (bad_alloc)
			{
				cout << "Error of the operator \"new\"" << endl;
				exit(-1);
			}
			g_ptr->set(s1, s2, s3, s4, s5);
			cont1.add(g_ptr);
			break;
		case 2:
			cout << "Enter a mark:" << endl;
			try
			{
				cin >> s1;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a model:" << endl;
			try
			{
				cin >> s2;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a engine size:" << endl;
			try
			{
				cin >> s3;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a colour:" << endl;
			try
			{
				cin >> s4;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a transmission type:" << endl;
			try
			{
				cin >> s5;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			try
			{
				g_ptr = new automobile;
			}
			catch (bad_alloc)
			{
				cout << "Error of the operator \"new\"" << endl;
				exit(-1);
			}
			g_ptr->set(s1, s2, s3, s4, s5);
			cont1.add(g_ptr);
			break;
		case 3:
			cout << "Enter a mark:" << endl;
			try
			{
				cin >> s1;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a model:" << endl;
			try
			{
				cin >> s2;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a total number of passengers:" << endl;
			try
			{
				cin >> s3;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a number of seats:" << endl;
			try
			{
				cin >> s4;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			cout << "Enter a terminal point:" << endl;
			try
			{
				cin >> s5;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			try
			{
				g_ptr = new bus;
			}
			catch (bad_alloc)
			{
				cout << "Error of the operator \"new\"" << endl;
				exit(-1);
			}
			g_ptr->set(s1, s2, s3, s4, s5);
			cont1.add(g_ptr);
			break;
		case 4:
			cout << "Enter the number of the processed element." << endl;//Надо вставлять в keeper::changeEl по логике?
			try
			{
				cin >> num;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			try
			{
				cont1.changeEl(num);
			}
			catch (int)
			{
				cout << "The list is empty" << endl;
			}
			catch (double)
			{
				cout << "Element not found" << endl;
			}
			break;
		case 5:
			cout << "Enter number of deleting position." << endl;
			try
			{
				cin >> num;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cout << endl;
			try
			{
				cont1.del(num);
			}
			catch (int)
			{
				cout << "The list is empty" << endl;
			}
			catch (double)
			{
				cout << "Element not found" << endl;
			}

			/*
			keeper g2 = cont1;
			g2.show();
			int a = 5;*/
			break;
		case 6:
			try
			{
				cout << cont1;
			}
			catch (int)
			{
				cout << "The list is empty" << endl;
			}
			break;

		case 7:
			cout << "Enter a file name or path with name:" << endl;
			try
			{
				cin >> filename;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			try
			{
				//garage.txt
				cont1.loadToFile(filename);
			}
			catch (int)
			{
				cout << "The list is empty" << endl;
			}
			break;
		case 8:
			cout << "Enter a file name or path with name:" << endl;
			try
			{
				cin >> filename;
				if (cin.bad() || cin.fail())
				{
					throw buffErr;
				}
			}
			catch (char*)
			{
				exit(1);
			}
			cont1.loadFromFile(filename);
			break;
		}
	} while (mode != 0);
	delete[] s1;
	delete[] s2;
	delete[] s3;
	delete[] s4;
	delete[] s5;
	delete[] filename;
	return 0;
}