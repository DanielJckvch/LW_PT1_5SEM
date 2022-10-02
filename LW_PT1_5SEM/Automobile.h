#pragma once
#include<iostream>
#include "Garage.h"
using namespace std;
class automobile : public garage
{
private:
	char* mark;
	char* model;
	char* engSize;
	char* colour;
	char* transmission;
	char t;
public:
	void show(std::ostream& out);
	void change(void);
	automobile* get(void);
	char* get(int propNum);
	void set(char* s1, char* s2, char* s3, char* s4, char* s5);
	automobile(void);
	automobile(char* s1, char* s2, char* s3, char* s4, char* s5);
	automobile(const automobile& toCopy);
	~automobile(void);
};
