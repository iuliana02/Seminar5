#pragma once
#include <vector>
#include "Auto.h"

//strategy class
//clasa abstracta cu o metoda abstracta sort()
class Sorter
{
public:
	virtual void sort(vector <Auto> &autos) = 0;

};