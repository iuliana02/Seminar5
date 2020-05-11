#ifndef AUTO_H
#define AUTO_H

#pragma once
#include <string>
using namespace std;

class Auto
{
private:
	int id;
	string marke;
	string modell;

public:
	Auto();
	Auto(int id, string marke, string modell);
	string toString();

	//getters+setters
	int get_id();
	void set_id(int id);
	string get_marke();
	void set_marke(string marke);
	string get_modell();
	void set_modell(string modell);

//	~Auto();
};

#endif