#include <iostream>
#include <string>
#include "Auto.h"
#include "AutoInMemoryRepository.h"
#include "AutoController.h"
#include <vector>
#include <cassert>
using namespace std;

void teste()
{
	CrudRepository <Auto*>* p;
	AutoInMemoryRepository d;
	p = &d;

	Auto a1{1,"a","aa"};
	Auto a2{2,"b","bb"};
	Auto a3{3,"c","cc"};

	Auto* ptra1 = &a1;
	Auto* ptra2 = &a2;
	Auto* ptra3 = &a3;

	p->save(ptra1);
	p->save(ptra2);
	p->save(ptra3);
	assert(p->size_autos() ==3);

	Auto a4(1, "d", "dd");
	Auto* ptra4 = &a4;
//	assert(p->update(ptra4) == nullptr);

	cout << p->findOne(1)->get_marke()<<endl;

	vector <Auto*> v=p->findAll();
	for (int i = 0; i < v.size(); i++)
		cout << v[i]->get_marke() << " ";

	p->del(1);
	p->del(2);
	assert(p->size_autos() == 1);

	cout << "Tests ok!";
}