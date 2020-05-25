#include "Kunde.h"
#include <string>
#include <iostream>

Kunde::Kunde() {
}

Kunde::Kunde(int id, string name)
{
	this->id = id;
	this->name = name;
}

int Kunde::get_id() const
{
	return this->id;
}
void Kunde::set_id(int id)
{
	this->id = id;
}

string Kunde::get_name() const
{
	return this->name;
}
void Kunde::set_name(string name)
{
	this->name = name;
}

bool Kunde::operator==(const Kunde& kunde) const
{
	return this->id == kunde.get_id() && this->name == kunde.get_name();
}

//Kunde::~Kunde()
//{}