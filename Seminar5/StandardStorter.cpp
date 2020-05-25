#include "StandardStorter.h"
#include <vector>
#include <algorithm>
#include "Utils.h"

void StandardStorter::sort(vector <Auto*> &autos)
{
	std::sort(autos.begin(), autos.end(), sort_by_marke());
}