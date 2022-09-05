#pragma once

#include "Vehicle.h"

class motorcycle : public vehicle
{
private:
	char* mark;
	char* model;
	char* terrain;
	char* engV;
	char* engCap;
public:
	void show(void);
	void change(void);
	motorcycle(void);
	motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5);
	~motorcycle(void);
};
