
#include "Film.h"

Film::Film() : Bilet()
{
}

Film::Film(string nume, string data, string locatie, int nrLoc, int nrLocVandute,string actori) : Bilet(nume, data, locatie, nrLoc, nrLocVandute)
{
	this->actori = actori;
}

Film::Film(const Film& f) : Bilet(f)
{
	this->actori = f.actori;
}

Film::~Film()
{
}

Bilet* Film::clone()
{
	return new Film(this->nume, this->data,this->locatie, this->nrLoc, this->nrLocVandute, this->actori);
}

string Film::getActori()
{
	return this->actori;
}

void Film::setActori(string actori)
{
	this->actori = actori;
}

Film& Film::operator=(const Film& f)
{
	Bilet::operator=(f);
	this->actori = f.actori;
	return *this;
}

bool Film::operator==(const Film& f)
{
	return Bilet::operator==(f) && this->actori == f.actori;
}

string Film::toString(string delim)
{
	return "Film" + delim + Bilet::toString(delim) + delim + this->actori;
}
