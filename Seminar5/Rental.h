#pragma once
#include "Kunde.h"
//#include "LKW.h"
//#include "PKW.h"
#include "Auto.h"
#include <vector>
#include "../../Seminar5/Seminar5/Reservierung.h"

using namespace std;

class Rental
{
private:
	vector <Reservierung> reservierung;

public:
	//constructor
	Rental();
	//destructor
	~Rental();

	void reserve_autos(Kunde p, Auto a, int t);
};