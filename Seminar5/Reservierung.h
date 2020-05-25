#pragma once
#include "Kunde.h"
#include "Auto.h"

class Reservierung
{
private:
	Kunde client;
	Auto masina;
	int tage;

	int info;

public:
	Reservierung(Kunde client, Auto masina, int tage);
	
	Kunde get_client();
	Auto get_auto();
	int get_tage();
	void set_person(Kunde pers);
	void set_Auto(Auto a);
	void set_tage(int tage);
	void set_info(int info);
};

