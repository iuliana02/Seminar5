#include "Reservierung.h"

Reservierung::Reservierung(Kunde* client, Auto* masina, int tage)
{
	this->client = client;
	this->masina = masina;
	this->tage = tage;
}
