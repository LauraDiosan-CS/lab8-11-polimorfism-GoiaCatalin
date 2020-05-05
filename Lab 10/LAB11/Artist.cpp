
#include "Artist.h"

Artist::Artist() : Bilet()
{
}

Artist::Artist(string nume, string data, string locatie, int nrLoc, int nrLocVandute) : Bilet(nume, data, locatie, nrLoc, nrLocVandute)
{
}

Artist::Artist(const Artist& f) : Bilet(f)
{
}

Artist::~Artist()
{
}

Bilet* Artist::clone()
{
	return new Artist(this->nume, this->data, this->locatie, this->nrLoc, this->nrLocVandute);
}

Artist& Artist::operator=(const Artist& f)
{
	Bilet::operator=(f);
	return *this;
}

bool Artist::operator==(const Artist& f)
{
	return Bilet::operator==(f);
}

string Artist::toString(string delim)
{
	return "Artist" + delim + Bilet::toString(delim);
}
