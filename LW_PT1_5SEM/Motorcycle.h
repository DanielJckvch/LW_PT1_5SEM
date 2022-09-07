#pragma once

#include "Garage.h"

class motorcycle : public garage
{
private:
	char* mark;
	char* model;
	char* terrain;
	char* engSize;
	char* engCap;
public:
	void show(ostream& out);
	void change(void);
	motorcycle* get(void);
	void set(char* s1, char* s2, char* s3, char* s4, char* s5);
	motorcycle(void);
	motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5);
	motorcycle(const motorcycle& toCopy);
	~motorcycle(void);
};
