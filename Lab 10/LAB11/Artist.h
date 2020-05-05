#pragma once
#include "Bilet.h"

class Artist : public Bilet {																			
public:
	Artist();
	Artist(string nume, string data, string locatie, int nrLoc, int nrLocVandute);
	Artist(const Artist& f);
	~Artist();

	Bilet* clone();

	Artist& operator=(const Artist& f);
	bool operator==(const Artist& f);
	string toString(string delim);
};