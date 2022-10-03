#pragma once
#include "Place.h"
#include "Motorcycle.h"
#include "Automobile.h"
#include "Bus.h"
#include "Garage.h"
class keeper
{
private:
	place* head;
	place* tail;
	int amount;
public:
	void add(garage* toInsert);
	void addToEnd(garage* toInsert);
	void insert(int pos, garage* toInsert);
	void copy(int sou, int dest);
	void del(int num);
	void changeEl(int num);
	void show(void);
	void search(char* s);
	void clear(void);
	keeper();
	keeper(garage* ob);
	keeper(const keeper& ob);
	~keeper();
	void loadToFile(char* name);
	void loadFromFile(char* name);
	friend ostream& operator<<(ostream& stream, const keeper& cont);
	
};
