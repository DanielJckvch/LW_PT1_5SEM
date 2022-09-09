#pragma once
#include <iostream>
using namespace std;
class garage
{
public:
	virtual void show(ostream& out) = 0;
	virtual void change(void) = 0;
	virtual garage* get(void) = 0;
	virtual char* get(int propNum) = 0;
	virtual void set(char* s1, char* s2, char* s3, char* s4, char* s5) = 0;
	virtual ~garage(void);
	
};