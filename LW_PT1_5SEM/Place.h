#pragma once

template <typename v>
class place
{
public:
	place* prev;
	place* next;
	v* vehicle;
	place(v* ob = nullptr);
	~place();
};
