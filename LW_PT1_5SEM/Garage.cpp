#include <iostream>
#include "Garage.h"
#include "Vehicle.h"
using namespace std;
template <typename v>
void garage<v>::add(v* ob)
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
	return p->vehicle;
}
template <typename v>
void garage<v>::show(void)
{
	place<v>* p = head;
	while (p->next != nullptr)
	{
		p->vehicle->show();
		p = p->next;
	}
}
template <typename v>
garage<v>::garage()
{
	head = tail = new place<v>;
	tail->next = nullptr;
	head->prev = nullptr;
	amount = 0;
}
template <typename v>
garage<v>::~garage()
{
	place<v>* p = head;
	while (p != nullptr)
	{
		p = p->next;
		delete head;
		head = p;
	}
}