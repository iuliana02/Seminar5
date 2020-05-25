#pragma once
#include "Auto.h"

struct sort_by_marke
{
	bool operator()(Auto* a1, Auto* a2)
	{
		return a1->get_marke() < a2->get_marke();
	}
};