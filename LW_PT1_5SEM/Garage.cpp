#include <iostream>
#include "Garage.h"
#include "Vehicle.h"
using namespace std;
template <typename v>
void garage<v>::add(v ob)
{

	place<v>* new_place = new place<v>(ob);
	new_place->next = head;
	new_place->prev = nullptr;
	head->prev = new_place;
	head = new_place;
	amount++;
}
template <typename v>
void garage<v>::del(int num)
{
	place<v>* p;
	if (num > amount)
	{
		return;
	}
	num--;
	p = head;
	while (num > 0)
	{
		p = p->next;
		num--;
	}
	if (p->prev)
	{
		p->prev->next = p->next;
	}
	else
	{
		head = head->next;
	}
	if (p->next)
	{
		p->next->prev = p->prev;
	}
	else
	{
		tail = tail->prev;
	}
	delete p;
	amount--;
}
template <typename v>
vehicle* garage<v>::getEl(int num)
{
	place<v>* p;
	if (num > amount)
	{
		return nullptr;
	}
	num--;
	p = head;
	while (num > 0)
	{
		p = p->next;
		num--;
	}
	return &(p->vehicle);
}
template <typename v>
void garage<v>::show(void)
{
	place<v>* p = head;
	while (p->next != nullptr)
	{
		p->vehicle.show();
		p = p->next;
	}
}
template <typename v>
garage<v>::garage()
{
	cout << "Calling the constructor in the \"Garage\" class" << endl;
	head = tail = new place<v>;
	tail->next = nullptr;
	head->prev = nullptr;
	amount = 0;
}
template <typename v>
garage<v>::garage(v* ob)
{
	cout << "Calling the constructor in the \"Garage\" class" << endl;
	head = tail = new place<v>;
	tail->next = nullptr;
	head->prev = nullptr;
	amount = 0;
	this->add(ob);
}
template <typename v>
garage<v>::garage(const garage<v> &ob)
{
	cout << "Calling the copy constructor in the \"Garage\" class" << endl;
	place<v>* ob_p = ob.tail->prev;
	v* p;
	this->head = tail = new place<v>;
	head->prev = nullptr;
	tail->next = nullptr;
	amount = 0;
	//p = p->next;
	//ob_p = ob_p->next;
	//copy_veh
	while (ob_p != nullptr)
	{
		this->add(ob_p->vehicle);
		ob_p = ob_p->prev;
		amount++;
	}

	//tail = p;
}
template <typename v>
garage<v>::~garage()
{
	cout << "Calling the destructor in the \"Garage\" class" << endl;
	place<v>* p = head;
	while (p != nullptr)
	{
		p = p->next;
		delete head;
		head = p;
	}
}
template <typename v>
garage<v> garage<v>::operator++(int notused)
{
	cout << "Calling the destructor in the \"Garage\" class" << endl;
	place<v>* p = head;
	while (p != nullptr)
	{
		p = p->next;
		delete head;
		head = p;
	}
}