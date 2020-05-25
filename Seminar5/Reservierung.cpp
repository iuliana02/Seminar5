#include "Reservierung.h"

Reservierung::Reservierung(Kunde client, Auto masina, int tage)
{
	this->client = client;
	this->masina = masina;
	this->tage = tage;
	this->info = 0;
}

Kunde Reservierung::get_client()
{
	return this->client;
}

Auto Reservierung::get_auto()
{
	return this->masina;
}

int Reservierung::get_tage()
{
	return this->tage;
}

void Reservierung::set_Auto(Auto a)
{
	this->masina = a;
}

void Reservierung::set_person(Kunde c)
{
	this->client = c;
}

void Reservierung::set_tage(int t)
{
	this->tage = t;
}

void Reservierung::set_info(int info)
{
	this->info = info;
}