
#pragma once
#include <string>
using namespace std;

class Kunde
{
private:
	int id;
	string name;

public:
	Kunde();
	Kunde(int id, string name);

	int get_id();
	void set_id(int id);
	string get_name();
	void set_name(string name);

//	~Kunde();
};
