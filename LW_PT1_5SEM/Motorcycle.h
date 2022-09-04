#pragma once

#include "Vehicle.h"

class motorcycle : public vehicle
{
private:
	motorcycle* next;
	char* mark;
	char* model;
	char* terrain;
	char* engV;
	char* engCap;
public:
	void show(void);
	void change(void);
	motorcycle* getNext(void);
	void setNext(motorcycle* p);
	motorcycle(void);
	motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5);
	~motorcycle(void);
};
