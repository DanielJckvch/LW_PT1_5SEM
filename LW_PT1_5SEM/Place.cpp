#include "Place.h"

template <typename v>
place<v>::place(v* ob)
{
	vehicle = ob;
	next = prev = nullptr;
}
template <typename v>
place<v>::~place()
{
	delete vehicle;
}