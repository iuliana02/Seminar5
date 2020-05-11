#include "Auto.h"
#include <string>
#include <iostream>
using namespace std;

Auto::Auto()
{
}

Auto::Auto(int id, string marke, string modell)
{
	this->id = id;
	this->marke = marke;
	this->modell = modell;
}

int Auto :: get_id()
{
	return this->id;
}
void Auto::set_id(int id)
{
	this->id = id;
}

string Auto::get_marke()
{
	return this->marke;
}
void Auto::set_marke(string marke)
{
	this->marke = marke;
}

string Auto::get_modell()
{
	return this->modell;
}
void Auto::set_modell(string modell)
{
	this->modell = modell;
}

string Auto::toString()
{
	string String;
	String = " Id: " + to_string(this->id) + " Marke: " + this->marke + " Modell: " + this->modell;
	return String;
}

//Auto::~Auto() { }