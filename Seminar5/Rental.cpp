#include "Rental.h"
#include <iostream>

using namespace std;

Rental::Rental()
{
}

Rental::~Rental()
{
}

void Rental::reserve_autos(Kunde p, Auto a, int t)
{
	reservierung.push_back(Reservierung(p, a, t));
}

