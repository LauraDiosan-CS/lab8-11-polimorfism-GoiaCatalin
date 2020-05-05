#pragma once
#include "Bilet.h"

class Film : public Bilet {
private:
	string actori;
public:
	Film();
	Film(string nume, string data, string locatie, int nrLoc, int nrLocVandute, string actori);
	Film(const Film& f);
	~Film();

	Bilet* clone();

	string getActori();
	void setActori(string actori);
	Film& operator=(const Film& f);
	bool operator==(const Film& f);
	string toString(string delim);
};