#pragma once
#include "Place.h"
#include "Motorcycle.h"
#include "Vehicle.h"
template <typename v>
class garage
{
private:
	place<v>* head;
	place<v>* tail;
	int amount;
public:
	void add(v* ob);
	void del(int num);
	vehicle* getEl(int num);
	void show(void);
	garage();
	~garage();
};
