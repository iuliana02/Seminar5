#pragma once
#include "CrudRepository.h"
#include "Auto.h"
#include <vector>
#include <iostream>
using namespace std;

//in locul lui E din header vine tipul Auto
class AutoInMemoryRepository : public CrudRepository <Auto*> {
private:

public:
	vector <Auto*> autos; //In-Memory Liste von Autos

	AutoInMemoryRepository();

	vector <Auto*> get_autos();

	Auto* findOne(int id);

	vector <Auto*> findAll();

	Auto* save(Auto* aut);

	Auto* del(int id);

	Auto* update(Auto* aut);


	int size_autos() {return autos.size(); }

	//void add_autos();

};