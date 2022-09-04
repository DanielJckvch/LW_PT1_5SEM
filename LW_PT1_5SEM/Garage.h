#pragma once

#include "Motorcycle.h"
#include "Vehicle.h"
template <typename v>
class garage
{
private:
	v* list;
	int amount;
public:
	void add(char* s1, char* s2, char* s3, char* s4, char* s5);
	void del(int num);
	void changeData(int num);
	void show(void);
	garage();
	~garage();
};
