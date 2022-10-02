#define _CRT_SECURE_NO_WARNINGS
#include "Bus.h"
#include <iostream>
#include <string.h>
#define FIELDSIZE 15
using namespace std;

void bus::show(ostream& out)
{
	out << "Bus"<< endl;
	out << "Mark:" << mark << endl;
	out << "Model:" << model << endl;
	out << "Total number of passengers:" << passengerNum << endl;
	out << "Number of seats:" << seatsNum << endl;
	out << "Terminal point:" << terminal << endl;
	out << endl;
}
bus::bus(void)
{
	//notuse
	cout << "Calling the constructor in the \"Bus\" class" << endl;
	mark = model = passengerNum = seatsNum = terminal = nullptr;
	t = 'b';
}
bus::bus(char* s1, char* s2, char* s3, char* s4, char* s5) :mark(s1), model(s2), passengerNum(s3), seatsNum(s4), terminal(s5)
{
	cout << "Calling the constructor in the \"Bus\" class" << endl;
	t = 'b';
}
bus::bus(const bus& toCopy)
{
	cout << "Calling the copy constructor in the \"Bus\" class" << endl;
	t = 'b';
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
	if (toCopy.passengerNum)
	{
		try
		{
			passengerNum = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(passengerNum, toCopy.passengerNum);
	}
	else
	{
		passengerNum = nullptr;
	}
	if (toCopy.seatsNum)
	{
		try
		{
			seatsNum = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(seatsNum, toCopy.seatsNum);
	}
	else
	{
		seatsNum = nullptr;
	}
	if (toCopy.terminal)
	{
		try
		{
			terminal = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}
		strcpy(terminal, toCopy.terminal);
	}
	else
	{
		terminal = nullptr;
	}
}
bus* bus::get(void)
{
	bus* new_ob;
	try
	{
		new_ob = new bus(*this);
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}

	return new_ob;
}
char* bus::get(int propNum)
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
		return passengerNum;
	case 4:
		return seatsNum;
	case 5:
		return terminal;
	}
}
void bus::set(char* s1, char* s2, char* s3, char* s4, char* s5)
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
	if (!passengerNum)
	{
		try
		{
			passengerNum = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}

	}
	strcpy(passengerNum, s3);
	if (!seatsNum)
	{
		try
		{
			seatsNum = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}

	}
	strcpy(seatsNum, s4);
	if (!terminal)
	{
		try
		{
			terminal = new char[FIELDSIZE];
		}
		catch (bad_alloc)
		{
			cout << "Error of the operator \"new\"" << endl;
			exit(-1);
		}

	}
	strcpy(terminal, s5);
}
bus::~bus(void)
{
	cout << "Calling the destructor in the \"Bus\" class" << endl;
	delete[] mark;
	delete[] model;
	delete[] terminal;
	delete[] passengerNum;
	delete[] seatsNum;
}
void bus::change(void)
{
	int chanProp;
	char buffErr[] = "Error of the input buffer";
	cout << "Enter the number of vehicle property to change: 1 - mark, 2 - model, 3 - total number of passengers, 4 - number of seats, 5 - terminal point" << endl;
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
		cout << "Enter a new total number of passengers: " << endl;
		try
		{
			cin >> passengerNum;
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
		cout << "Enter a new number of seats: " << endl;
		try
		{
			cin >> seatsNum;
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
		cout << "Enter a new terminal point: " << endl;
		try
		{
			cin >> terminal;
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