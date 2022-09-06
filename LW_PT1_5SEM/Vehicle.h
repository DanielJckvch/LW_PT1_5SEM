#pragma once

class vehicle
{
public:
	virtual void show(void) = 0;
	virtual void change(void) = 0;
	virtual void set(char* s1, char* s2, char* s3, char* s4, char* s5) = 0;
};