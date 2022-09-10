#pragma once
#include "Garage.h"

class place
{
public:
	place* prev;
	place* next;
	garage* vehicle;
	place(garage* veh);
	place(void);
	place(const place& toCopy);
	~place();
};
