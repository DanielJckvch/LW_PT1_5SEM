#define _CRT_SECURE_NO_WARNINGS
#include "Motorcycle.h"
#include <iostream>
#include <string.h>
using namespace std;

void motorcycle::show(ostream& out)
{
	out << "Mark:" << mark << endl;
	/*cout << "Model:" << model << endl;
	cout << "Engine size:" << engV << endl;
	cout << "Engine capability:" << engCap<< endl;
	cout << "Terrain:" << terrain<< endl;*/
}
motorcycle::motorcycle(void)
{//notuse
	cout << "Calling the constructor in the \"Motorcycle\" class" << endl;
	mark = model = engSize = engCap = terrain = nullptr;
}
motorcycle::motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5):mark(s1),model(s2),engSize(s3),engCap(s4),terrain(s5)
{
	cout << "Calling the constructor in the \"Motorcycle\" class" << endl;
}
motorcycle::motorcycle(const motorcycle& toCopy)
{
	cout << "Calling the copy constructor in the \"Motorcycle\" class" << endl;
	if (toCopy.mark)
	{
		try
		{
			mark = new char[10];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(mark, toCopy.mark);
	}
	else
	{
		mark = nullptr;
	}
	/*if (ob.model)
	{
		model = new char[strlen(ob.model)];
		strcpy(model, ob.model);
	}
	else
	{
		model = nullptr;
	}
	if (ob.engV)
	{
		engV = new char[strlen(ob.engV)];
		strcpy(engV, ob.engV);
	}
	else
	{
		engV = nullptr;
	}
	if (ob.engCap)
	{
		engCap = new char[strlen(ob.engCap)];
		strcpy(engCap, ob.engCap);
	}
	else
	{
		engCap = nullptr;
	}
	if (ob.terrain)
	{
		terrain = new char[strlen(ob.terrain)];
		strcpy(terrain, ob.terrain);
	}
	else
	{
		terrain = nullptr;
	}*/
}

motorcycle* motorcycle::get(void)
{
	motorcycle* new_ob;
	try
	{
		new_ob = new motorcycle(*this);
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}
	
	return new_ob;
}

void motorcycle::set(char* s1, char* s2, char* s3, char* s4, char* s5)
{
	if (!mark)
	{
		try
		{
			mark = new char[10];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
	}
	strcpy(mark, s1);
	/*
	if (!model)
	{
		model = new char[strlen(s2)];
		
	}
	strcpy(model, s2);
	if (!engV)
	{
		engV = new char[strlen(s3)];
		
	}
	strcpy(engV, s3);
	if (!engCap)
	{
		engCap = new char[strlen(s4)];
		
	}
	strcpy(engCap, s4);
	if (!terrain)
	{
		terrain = new char[strlen(s5)];
		
	}
	strcpy(terrain, s5);*/
}
motorcycle::~motorcycle(void)
{
	cout << "Calling the destructor in the \"Motorcycle\" class" << endl;
	delete[] mark;
	//delete model;
	//delete terrain;
	//delete engV;
	//delete engCap;
}
void motorcycle::change(void)
{
	int chanProp;
	char buffErr[] = "Error of the input buffer";
	cout << "Enter the number of vehicle property to change: 1-mark." << endl;
	try
	{
		cin >> chanProp;
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
	switch (chanProp)
	{
	case 1:
		cout << "Enter a new mark: " << endl;
		try
		{
			cin >> mark;
			if (cin.bad() || cin.fail())
			{
				throw buffErr;
			}
		}
		catch (char*)
		{
			exit(1);
		}
		break;
	}
}

