#define _CRT_SECURE_NO_WARNINGS
#include "Automobile.h"
#include <iostream>
#include <string.h>
#define FIELDSIZE 15
using namespace std;

void automobile::show(ostream& out)
{
	out << "Automobile" << endl;
	out << "Mark:" << mark << endl;
	out << "Model:" << model << endl;
	out << "Engine size:" << engSize << endl;
	out << "Colour:" << colour << endl;
	out << "Transmission type:" << transmission << endl;
	out << endl;
}
automobile::automobile(void)
{
	//notuse
	cout << "Calling the constructor in the \"Automobile\" class" << endl;
	mark = model = engSize = colour = transmission = nullptr;
	t = 'a';
}
automobile::automobile(char* s1, char* s2, char* s3, char* s4, char* s5) :mark(s1), model(s2), engSize(s3), colour(s4), transmission(s5)
{
	cout << "Calling the constructor in the \"Automobile\" class" << endl;
	t = 'a';
}
automobile::automobile(const automobile& toCopy)
{
	cout << "Calling the copy constructor in the \"Automobile\" class" << endl;
	t = 'a';
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
	if (toCopy.colour)
	{
		try
		{
			colour = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(colour, toCopy.colour);
	}
	else
	{
		colour = nullptr;
	}
	if (toCopy.transmission)
	{
		try
		{
			transmission = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(transmission, toCopy.transmission);
	}
	else
	{
		transmission = nullptr;
	}
}

automobile* automobile::get(void)
{
	automobile* new_ob;
	try
	{
		new_ob = new automobile(*this);
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}

	return new_ob;
}
char* automobile::get(int propNum)
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
		return colour;
	case 5:
		return transmission;
	}
}
void automobile::set(char* s1, char* s2, char* s3, char* s4, char* s5)
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
	if (!colour)
	{
		try
		{
			colour = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}

	}
	strcpy(colour, s4);
	if (!transmission)
	{
		try
		{
			transmission = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}

	}
	strcpy(transmission, s5);
}
automobile::~automobile(void)
{
	cout << "Calling the destructor in the \"Automobile\" class" << endl;
	delete[] mark;
	delete[] model;
	delete[] transmission;
	delete[] engSize;
	delete[] colour;
}
void automobile::change(void)
{
	int chanProp;
	char buffErr[] = "Error of the input buffer";
	cout << "Original data: " << endl;
	cout << endl;
	cout << "Automobile" << endl;
	cout << "Mark:" << mark << endl;
	cout << "Model:" << model << endl;
	cout << "Engine size:" << engSize << endl;
	cout << "Colour:" << colour << endl;
	cout << "Transmission type:" << transmission << endl;
	cout << endl;
	cout << "Enter the number of vehicle property to change: 1 - mark, 2 - model, 3 - engine size, 4 - colour, 5 - transmission type." << endl;
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
		cout << "Enter a new colour: " << endl;
		try
		{
			cin >> colour;
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
		cout << "Enter a new transmission type: " << endl;
		try
		{
			cin >> transmission;
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