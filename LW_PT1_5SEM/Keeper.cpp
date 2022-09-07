#include <iostream>
#include "Keeper.h"
#include "Garage.h"
using namespace std;
void keeper::add(garage* toInsert)
{
	place* new_place;
	try
	{
		new_place = new place(toInsert);
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}
	new_place->next = head;
	head->prev = new_place;
	head = new_place;
	amount++;
}
void keeper::del(int num)
{
	place* p = head;
	if (p->next == nullptr)
	{
		int er = 1;
		throw er;
		return;
	}
	if (num > amount || num <= 0)
	{
		double er1 = 1.0;
		throw er1;
		return;
	}
	num--;
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
void keeper::changeEl(int num)
{
	place* p;
	if (num > amount)
	{
		int er = 1;
		throw er;
		return;
	}
	num--;
	p = head;
	while (num > 0)
	{
		p = p->next;
		num--;
	}
	p->vehicle->change();
}
void keeper::show(void)
{
	place* p = head;
	while (p->next != nullptr)
	{
		p->vehicle->show(cout);
		p = p->next;
	}
}
keeper::keeper()
{
	cout << "Calling the constructor without parameters in the \"Keeper\" class" << endl;
	try
	{
		head = tail = new place;
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}
	amount = 0;
}
keeper::keeper(garage* veh)
{
	cout << "Calling the constructor with parameters in the \"Keeper\" class" << endl;
	try
	{
		head = tail = new place;
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}
	amount = 0;
	this->add(veh);
}
keeper::keeper(const keeper &toCopy)
{
	cout << "Calling the copy constructor in the \"Keeper\" class" << endl;
	place* ob_p = toCopy.tail->prev;
	garage* p;
	try
	{
		head = tail = new place;
	}
	catch (bad_alloc)
	{
		cout << "Error of the operator \"new\"" << endl;
		exit(-1);
	}
	amount = 0;
	while (ob_p != nullptr)
	{

		this->add(ob_p->vehicle->get());
		ob_p = ob_p->prev;
		amount++;
	}
}
keeper::~keeper()
{
	cout << "Calling the destructor in the \"Keeper\" class" << endl;
	place* p = head;
	while (p != nullptr)
	{
		p = p->next;
		delete head;
		head = p;
	}
}
ostream& operator<<(ostream& stream, const keeper& cont)
{
	place* p = cont.head;
	
	if (p->next == nullptr)
	{
		int er = 1;
		throw er;
		return stream;
	}
	while (p->next != nullptr)
	{
		p->vehicle->show(stream);
		p = p->next;
	}
	return stream;
}