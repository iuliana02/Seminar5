#include "AutoController.h"
#include "Rental.h"
#include "Auto.h"
using namespace std;

AutoController::AutoController()
{
	repo = AutoInMemoryRepository();
	Auto* a1 = new Auto(1, "Volvo", "C");
	saveAuto(a1);
	Auto* a2 = new Auto(2, "Mercedes", "ML");
	saveAuto(a2);
	Auto* a3 = new Auto(3, "Audi", "A8");
	saveAuto(a3);
	Auto* a4 = new Auto(4, "Volgswagen", "Golf");
	saveAuto(a4);
}


Auto* AutoController::findAutoById(int id)
{
	//cout << "Find Auto by Id\n";
	Auto* rez = repo.findOne(id);
	return rez;
} 

vector<Auto*> AutoController:: findAll2()
{
	//cout << "Find all autos\n";
	vector<Auto*> rez = repo.findAll();
	return rez;
}

Auto* AutoController::saveAuto(Auto* a)
{
	//cout << "Save Auto\n";
	Auto* rez = repo.save(a);
	return rez;
}

Auto* AutoController::updateAuto(Auto* a)
{
	//cout << "Update Auto\n";
	Auto* updated = repo.update(a);
	return updated;
}

Auto* AutoController::deleteAuto(int id)
{
	//cout << "Delete Auto\n";
	Auto* deleted = repo.del(id);
	return deleted;
}



//De la seminar 5
//atribut static
AutoController* AutoController::instanta = NULL;

AutoController* AutoController::ret_instanta()
{
	//daca e null, se instantiaza, altfel se returneaza
	if (instanta==NULL)
		instanta = new AutoController();
	return instanta;
}

vector<Auto*> AutoController::sort_autos()
{
	vector<Auto*> aux = repo.autos;
	for (int i = 0; i < aux.size()-1; ++i)
	{
		for (int j = 0; j < aux.size()-i-1; ++i)
		{
			if (aux[i]->get_marke() <= aux[j]->get_marke())
			{
				swap(aux[i], aux[j]);
			}
			//+bool
		}
	}
	return aux;
}

AutoController::~AutoController()
{
}