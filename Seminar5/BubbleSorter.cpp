#include "BubbleSorter.h"
#include <vector>
#include "Sorter.h"

void BubbleSorter::sort(vector<Auto*> &autos)
{

		for (int i = 0; i < autos.size() ; ++i)
		{
			for (int j = 0; j < autos.size(); ++i)
			{
				if (autos[i]->get_marke() > autos[j]->get_marke())
				{
					swap(autos[i], autos[j]);
				}
				//+bool
			}
		}
		//return aux;
}
//trimitem prin referinta ca sa se modifice si in exterior