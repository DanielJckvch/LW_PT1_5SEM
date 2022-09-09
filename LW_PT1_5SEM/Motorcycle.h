#pragma once
#include<iostream>
#include "Garage.h"
using namespace std;
class motorcycle : public garage
{
private:
	char* mark;
	char* model;
	char* terrain;
	char* engSize;
	char* engCap;
	char t;
public:
	void show(std::ostream& out);
	void change(void);
	motorcycle* get(void);
	char* get(int propNum);
	void set(char* s1, char* s2, char* s3, char* s4, char* s5);
	motorcycle(void);
	motorcycle(char* s1, char* s2, char* s3, char* s4, char* s5);
	motorcycle(const motorcycle& toCopy);
	~motorcycle(void);
};
