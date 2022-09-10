#define _CRT_SECURE_NO_WARNINGS
#include "Motorcycle.h"
#include <iostream>
#include <string.h>
#define FIELDSIZE 15
using namespace std;

void motorcycle::show(ostream& out)
{
	out << "Mark:" << mark << endl;
	out << "Model:" << model << endl;
	out << "Engine size:" << engSize << endl;
	out << "Engine capability:" << engCap<< endl;
	out << "Terrain:" << terrain<< endl;
	out << endl;
}
motorcycle::motorcycle(void)
{
	//notuse
	cout << "Calling the constructor in the \"Motorcycle\" class" << endl;
	mark = model = engSize = engCap = terrain = nullptr;
	t = 'm';
}
motorcycle::motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5):mark(s1),model(s2),engSize(s3),engCap(s4),terrain(s5)
{
	cout << "Calling the constructor in the \"Motorcycle\" class" << endl;
	t = 'm';
}
motorcycle::motorcycle(const motorcycle& toCopy)
{
	cout << "Calling the copy constructor in the \"Motorcycle\" class" << endl;
	t = 'm';
	if (toCopy.mark)
	{
		try
		{
			mark = new char[FIELDSIZE];
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
	if (toCopy.model)
	{
		try
		{
			model = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(model, toCopy.model);
	}
	else
	{
		model = nullptr;
	}
	if (toCopy.engSize)
	{
		try
		{
			engSize = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(engSize, toCopy.engSize);
	}
	else
	{
		engSize = nullptr;
	}
	if (toCopy.engCap)
	{
		try
		{
			engCap = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(engCap, toCopy.engCap);
	}
	else
	{
		engCap = nullptr;
	}
	if (toCopy.terrain)
	{
		try
		{
			terrain = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(terrain, toCopy.terrain);
	}
	else
	{
		terrain = nullptr;
	}
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
char* motorcycle::get(int propNum)
{
	switch (propNum)
	{
	case 0:
		return &t;
	case 1:
		return mark;
	case 2:
		return model;
	case 3:
		return engSize;
	case 4:
		return engCap;
	case 5:
		return terrain;
	}
}
void motorcycle::set(char* s1, char* s2, char* s3, char* s4, char* s5)
{
	if (!mark)
	{
		try
		{
			mark = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
	}
	strcpy(mark, s1);
	if (!model)
	{
		try
		{
			model = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		
	}
	strcpy(model, s2);
	if (!engSize)
	{
		try
		{
			engSize = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		
	}
	strcpy(engSize, s3);
	if (!engCap)
	{
		try
		{
			engCap = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		
	}
	strcpy(engCap, s4);
	if (!terrain)
	{
		try
		{
			terrain = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		
	}
	strcpy(terrain, s5);
}
motorcycle::~motorcycle(void)
{
	cout << "Calling the destructor in the \"Motorcycle\" class" << endl;
	delete[] mark;
	delete[] model;
	delete[] terrain;
	delete[] engSize;
	delete[] engCap;
}
void motorcycle::change(void)
{
	int chanProp;
	char buffErr[] = "Error of the input buffer";
	cout << "Enter the number of vehicle property to change: 1 - mark, 2 - model, 3 - engine size, 4 - engine capability, 5 - terrain." << endl;
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
	case 2:
		cout << "Enter a new model: " << endl;
		try
		{
			cin >> model;
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
	case 3:
		cout << "Enter a new engine size: " << endl;
		try
		{
			cin >> engSize;
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
	case 4:
		cout << "Enter a new engine capability: " << endl;
		try
		{
			cin >> engCap;
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
	case 5:
		cout << "Enter a new terrain for the motorcycle: " << endl;
		try
		{
			cin >> terrain;
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

