#define _CRT_SECURE_NO_WARNINGS
#include "Motorcycle.h"
#include <string>
#include <iostream>
using namespace std;

void motorcycle::show(void)
{
	cout << "Mark:" << mark << endl;
	/*cout << "Model:" << model << endl;
	cout << "Engine size:" << engV << endl;
	cout << "Engine capability:" << engCap<< endl;
	cout << "Terrain:" << terrain<< endl;*/
}
motorcycle::motorcycle(void)
{
	mark = model = engV = engCap = terrain = nullptr;
}
motorcycle::motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5):mark(s1),model(s2),engV(s3),engCap(s4),terrain(s5){}
/*
{
	mark = s1;
	/*
	model =s2;
	engV =s3;
	engCap=s4;
	terrain=s5;
	*/
	/*
	cout << "Mark:" << endl;
	mark = new char[10];
	cin >> mark;
	cout << "Model:" << endl;
	model = new char[10];
	cin >> model;
	cout << "Engine size:" << endl;
	cin >> engV;
	cout << "Engine capability:" << endl;
	cin >> engCap;
	cout << "Terrain:" << endl;
	terrain = new char[10];
	cin >> terrain;
	next = nullptr;
}*/
motorcycle::~motorcycle(void)
{
	delete mark;
	//delete model;
	//delete terrain;
	//delete engV;
	//delete engCap;
}
void motorcycle::change(void)
{
	char* s = new char[20];
	int chanField;
	cout << "Enter number of changing data about vehicle: 1-mark." << endl;
	cin >> chanField;
	switch (chanField)
	{
	case 1:
		cout << "Enter new mark: " << endl;
		cin >> s;
		strcpy(mark, s);
		break;
	}
	delete[] s;
}

