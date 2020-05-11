#pragma once
#include "AutoInMemoryRepository.h"
//#include "Kunde.h"
#include <vector>
using namespace std;

class AutoController //: public AutoInMemoryRepository
{
private:
	AutoController();
	static AutoController *instanta;

public:
	AutoInMemoryRepository repo;

	~AutoController();

	Auto* findAutoById(int id);
	std::vector<Auto*> findAll2();
	Auto* saveAuto (Auto* a);
	Auto* updateAuto (Auto* a);
	Auto* deleteAuto(int id);

	//void adding_autos();

	static AutoController* ret_instanta();
	vector<Auto*> sort_autos();
};

