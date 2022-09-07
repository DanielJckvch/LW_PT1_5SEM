#pragma once
#include "Place.h"
#include "Motorcycle.h"
#include "Garage.h"
class keeper
{
private:
	place* head;
	place* tail;
	int amount;
public:
	void add(garage* toInsert);
	void del(int num);
	void changeEl(int num);
	void show(void);
	keeper();
	keeper(garage* ob);
	keeper(const keeper& ob);
	~keeper();
	friend ostream& operator<<(ostream& stream, const keeper& cont);
};
