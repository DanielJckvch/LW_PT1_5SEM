#include <iostream>
#include "Garage.h"
#include "Garage.cpp"
#include "Motorcycle.h"
using namespace std;

int main(void)
{
	char* mark;
	char* model;
	char* terrain;
	char* engV;
	char* engCap;
	model = engV = engCap = terrain = nullptr;
	garage<motorcycle> g1;
	int mode = 0;
	int num = 0;
	do
	{
		cout << "Enter mode of processing: 0-exit, 1 - add, 2 - delete, 3-show list." << endl;
		cin >> mode;
		switch (mode)
		{
		case 1:
			cout << "Mark:" << endl;
			mark = new char[10];
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
			g1.add(mark, model, engV, engCap, terrain);
			break;
		case 2:
			cout << "Enter number of deleting position." << endl;
			cin >> num;
			g1.del(num);
			break;
		case 3:
			g1.show();
			break;
		}
	} while (mode != 0);
	return 0;
}