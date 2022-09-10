#include "Place.h"
#include <iostream>
using namespace std;


place::place(garage* veh):vehicle(veh)
{
	cout << "Calling the constructor with parameters in the \"Place\" class" << endl;
	next = prev = nullptr;
}

place::place(const place& toCopy) :vehicle(toCopy.vehicle)
{
	cout << "Calling the copy constructor in the \"Place\" class" << endl;
	next = prev = nullptr;
}
place::place(void)
{
	//notuse
	cout << "Calling the constructor without parameters in the \"Place\" class" << endl;
	vehicle = nullptr;
	next = prev = nullptr;
}
place::~place()
{
	cout << "Calling the destructor in the \"Place\" class" << endl;
	delete vehicle;
}