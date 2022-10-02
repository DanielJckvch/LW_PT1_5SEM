#pragma once
#include<iostream>
#include "Garage.h"
using namespace std;
class bus : public garage
{
private:
	char* mark;
	char* model;
	char* passengerNum;
	char* seatsNum;
	char* terminal;
	char t;
public:
	void show(std::ostream& out);
	void change(void);
	bus* get(void);
	char* get(int propNum);
	void set(char* s1, char* s2, char* s3, char* s4, char* s5);
	bus(void);
	bus(char* s1, char* s2, char* s3, char* s4, char* s5);
	bus(const bus& toCopy);
	~bus(void);
};
