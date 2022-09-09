#include <iostream>
#include "Keeper.h"
#include "Motorcycle.h"
#include "Place.h"
#include "Garage.h"
#define FIELDSIZE 10
using namespace std;
//‘‡ÈÎ˚-609-‡ˇ ÒÚ. Õ¿œ»—¿“‹ «¿ƒ¿Õ»≈ —ƒ≈À¿“‹ “»“”À‹Õ€≈   Œ“” » “œ–
int main(void)
{
	
	char* s1;
	char* s2;
	char* s3;
	char* s4;
	char* s5;
	try
	{
		s1 = new char[FIELDSIZE];
		s2 = new char[FIELDSIZE];
		s3 = new char[FIELDSIZE];
		s4 = new char[FIELDSIZE];
		s5 = new char[FIELDSIZE];
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
			/*
			cout << "Model:" << endl;
			cin >> model;
			cout << "Engine size:" << endl;
			cin >> engV;
			cout << "Engine capability:" << endl;
			cin >> engCap;
			cout << "Terrain:" << endl;
			cin >> terrain;*/
			try
			{
				g_ptr = new motorcycle;
			}
			catch (bad_alloc)
			{
				cout << "Error of the operator \"new\"" << endl;
				exit(-1);
			}
			g_ptr->set(s1, s2, s4, s5, s3);
			cont1.add(g_ptr);
			break;
		case 2:
			cout << "Enter a mark:" << endl;
			cin >> s1;
			cout << endl;
			/*
			cout << "Model:" << endl;
			cin >> model;
			cout << "Engine size:" << endl;
			cin >> engV;
			cout << "Engine capability:" << endl;
			cin >> engCap;
			cout << "Terrain:" << endl;
			cin >> terrain;*/
			g_ptr = new motorcycle;
			g_ptr->set(s1, s2, s4, s5, s3);
			cont1.add(g_ptr);
			break;
		case 3:
			cout << "Enter a mark:" << endl;
			cin >> s1;
			cout << endl;
			/*
			cout << "Model:" << endl;
			cin >> model;
			cout << "Engine size:" << endl;
			cin >> engV;
			cout << "Engine capability:" << endl;
			cin >> engCap;
			cout << "Terrain:" << endl;
			cin >> terrain;*/
			g_ptr = new motorcycle;
			g_ptr->set(s1, s2, s4, s5, s3);
			cont1.add(g_ptr);
			break;
		case 4:
			cout << "Enter the number of the processed element." << endl;
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
			try
			{
				cont1.loadToFile();
			}
			catch (int)
			{
				cout << "The list is empty" << endl;
			}
			break;
		case 8:
			cont1.loadFromFile();
			break;
		}
	} while (mode != 0);
	delete[] s1;
	delete[] s2;
	delete[] s3;
	delete[] s4;
	delete[] s5;
	return 0;
}