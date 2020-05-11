#pragma once
#include "Kunde.h"
#include "Auto.h"

class Reservierung
{
private:
	Kunde* client;
	Auto* masina;
	int tage;

public:
	Reservierung(Kunde *client, Auto* masina, int tage);


};

