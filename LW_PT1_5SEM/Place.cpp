#include "Place.h"
#include <iostream>
using namespace std;

template <typename v>
place<v>::place(v ob):vehicle(ob)
{
	cout << "Calling the constructor in the \"Place\" class" << endl;
	//vehicle = ob;
	next = prev = nullptr;
}
template <typename v>
place<v>::place(const place<v>& ob) :vehicle(ob)
{
	cout << "Calling the copy constructor in the \"Place\" class" << endl;
	//vehicle = ob.vehicle;
	next = prev = nullptr;
}
template <typename v>
place<v>::place(void)
{//notuse
	cout << "Calling the constructor in the \"Place\" class" << endl;
	//vehicle = nullptr;
	next = prev = nullptr;
}
template <typename v>
place<v>::~place()
{
	cout << "Calling the destructor in the \"Place\" class" << endl;
	//delete &vehicle;
}