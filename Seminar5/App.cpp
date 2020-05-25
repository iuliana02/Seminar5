#include "UI.h"
#include <iostream>
#include "Sorter.h"
#include "BubbleSorter.h"
#include "StandardStorter.h"

using namespace std;

int main()
{
	UI console;
	console.optiuni();

	AutoController* ctrl = AutoController::ret_instanta();
	int careAlgoritm = 1;
//	if (careAlgoritm == 1)
//		ctrl->sort_autos();
//	if (careAlgoritm == 2)
//		ctrl->sort_autos_std();

	Sorter* bsrt = new BubbleSorter();
	Sorter* ssrt = new StandardStorter();

	ctrl->setSorter(bsrt);
	ctrl->sort_autos_std();
	vector<Auto*> a = ctrl->findAll2();
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i]->get_marke() << " ";
	}

	delete ctrl;

	return 0;
}