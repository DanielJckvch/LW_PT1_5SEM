#include <iostream>
#include "Garage.h"
#include "Garage.cpp"
#include "Motorcycle.h"
#include "Place.h"
#include "Place.cpp"
#define FIELDSIZE 10
using namespace std;

int main(void)
{
	char* mark;
	char* model;
	char* terrain;
	char* engV;
	char* engCap;
	vehicle* v1;
	mark = model = engV = engCap = terrain = nullptr;
	motorcycle moto1;
	garage<motorcycle> g1;
	int mode = 0;
	int num = 0;

	do
	{
		cout << "Enter mode of processing: 0-exit, 1 - add, 2 - delete, 3-show list, 4-change object parameters." << endl;
		cin >> mode;
		switch (mode)
		{
		case 1:
			cout << "Mark:" << endl;
			mark = new char[FIELDSIZE];
			cin >> mark;
			/*
			cout << "Model:" << endl;
			model = new char[10];
			cin >> model;
			cout << "Engine size:" << endl;
			engV = new char[10];
			cin >> engV;
			cout << "Engine capability:" << endl;
			engCap = new char[10];
			cin >> engCap;
			cout << "Terrain:" << endl;
			terrain = new char[10];
			cin >> terrain;*/
			moto1.set(mark, model, engV, engCap, terrain);
			g1.add(moto1);
			break;
		case 2:
			cout << "Enter number of deleting position." << endl;
			cin >> num;
			g1.del(num);
			break;
		case 3:
			g1.show();
			break;
		case 4:
			cout << "Enter number of processing position." << endl;
			cin >> num;
			v1 = g1.getEl(num);
			v1->change();
			break;
		case 5:
		{
			garage<motorcycle> g2 = g1;
			g2.show();
			int a = 5;
		}
		break;
		}
	} while (mode != 0);
	return 0;
}