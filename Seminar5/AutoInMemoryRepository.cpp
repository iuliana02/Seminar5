#include "AutoInMemoryRepository.h"

AutoInMemoryRepository::AutoInMemoryRepository()
{

}

vector <Auto*> AutoInMemoryRepository::get_autos()
{
	return this->autos;
}

Auto* AutoInMemoryRepository::findOne(int id)
{
	//Auto a_null; varianta lui Hori, in care returnez un obiect null, neinitializat
	for (int i = 0; i < autos.size(); i++)
		if (autos[i]->get_id() == id)
			return autos[i];
	return nullptr; //sau return a_null sau throw exception sau optional
}

vector <Auto*>  AutoInMemoryRepository::findAll()
{
	//ia niste pointeri dintr-un vector si ii baga in alt vector
	vector <Auto*> vect_autos;
	for (int i = 0; i < autos.size(); i++)
		vect_autos.push_back(autos[i]);
	return vect_autos;

	//return autos; (alta varianta)
}

Auto* AutoInMemoryRepository::save(Auto* aut)
{
	for (int i = 0; i < autos.size(); i++)
		if (autos[i]->get_id() == aut->get_id())
			return nullptr; //nu e invers?? aici return nullptr si jos return autos[i]
	autos.push_back(aut);
	return aut;
}

Auto* AutoInMemoryRepository::del(int id)
{
	for (int i = 0; i < autos.size(); i++)
		if (autos[i]->get_id() == id)
		{
			Auto* temp = autos[i];
			//delete autos[i]; sterg obiectul
			autos.erase(autos.begin() + i); //sterg pointerul
			return autos[i];
		}
	return nullptr;
}

Auto* AutoInMemoryRepository::update(Auto* aut)
{
	if (del(aut->get_id()) == nullptr) //nu a sters
		return aut; //nu s-a modificat
	//modific obiectul cu id-ul dat in aut cu campurile noului obiect
	//se modifica ordinea
	//del(aut->get_id());
	save(aut);
	return nullptr; //am modificat

}


/*
void AutoInMemoryRepository::add_autos()
{
	Auto* a1 = new Auto( 1,"Audi","A8" );
	//Auto* ptra1 = &a1;
	save(a1);
	Auto* a2 = new Auto( 2,"Mercedes","ML" );
	//Auto* ptra2 = &a2;
	save(a2);
	Auto a3 = Auto( 3,"Volkswagen","Golf" );
	//Auto* ptra3 = &a3;
	save(&a3);
}*/