#include <iostream>
#include "Garage.h"
#include "Vehicle.h"
using namespace std;
template <typename v>
void garage<v>::add(char* s1, char* s2, char* s3, char* s4, char* s5)
{

	v* p = list;
	list = new v(s1, s2, s3, s4, s5);
	list->setNext(p);

	amount++;
}
template <typename v>
void garage<v>::del(int num)
{
	v* p;
	v* delP = nullptr;
	if (num > amount)
	{
		return;
	}
	num--;
	p = list;
	while (num > 0)
	{
		p = p->getNext();
		num--;
	}
	delP = p->getNext();
	p->setNext(delP->getNext());
	delete delP;

	amount--;
}
template <typename v>
void garage<v>::changeData(int num)
{

}
template <typename v>
void garage<v>::show(void)
{
	v* p = list;
	while (p->getNext() != nullptr)
	{
		p->show();
		p = p->getNext();
	}
}
template <typename v>
garage<v>::garage()
{
	list = new v;
	amount = 0;
}
template <typename v>
garage<v>::~garage()
{
	v* p = list;
	while (p != nullptr)
	{
		p = p->getNext();
		delete list;
		list = p;
	}
}