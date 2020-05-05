#include "Bilet.h"

Bilet::Bilet()
{
	this->nrLoc = 0;
	this->nrLocVandute = 0;
}

Bilet::Bilet(string nume, string data, string locatie, int nrLoc, int nrLocVandute)
{
	this->nume = nume;
	this->data = data;
	this->locatie = locatie;
	this->nrLoc = nrLoc;
	this->nrLocVandute = nrLocVandute;
}

Bilet::Bilet(const Bilet& a)
{
	this->nume = a.nume;
	this->data = a.data;
	this->locatie = a.locatie;
	this->nrLoc = a.nrLoc;
	this->nrLocVandute = a.nrLocVandute;
}

Bilet::~Bilet()
{
}

Bilet* Bilet::clone()
{
	return new Bilet(this->nume, this->data, this->locatie, this->nrLoc, this->nrLocVandute);
}

string Bilet::getNume()
{
	return this->nume;
}

string Bilet::getData()
{
	return this->data;
}

string Bilet::getLocatie()
{
	return this->locatie;
}

int Bilet::getNrLoc()
{
	return this->nrLoc;
}

int Bilet::getNrLocVandute()
{
	return this->nrLocVandute;
}

void Bilet::setNume(string nume)
{
	this->nume = nume;
}

void Bilet::setData(string data)
{
	this->data = data;
}

void Bilet::setLocatie(string locatie)
{
	this->locatie = locatie;
}

void Bilet::setNrLoc(int nrLoc)
{
	this->nrLoc = nrLoc;
}

void Bilet::setNrLocVandute(int nrLocVandute)
{
	this->nrLocVandute = nrLocVandute;
}


Bilet& Bilet::operator=(const Bilet& a)
{
	this->nume = a.nume;
	this->data = a.data;
	this->locatie = a.locatie;
	this->nrLoc = a.nrLoc;
	this->nrLocVandute = a.nrLocVandute;
	return *this;
}

bool Bilet::operator==(const Bilet& a)
{
	return this->nume == a.nume && this->data == a.data && this->locatie == a.locatie && this->nrLoc == a.nrLoc && this->nrLocVandute == a.nrLocVandute;
}

string Bilet::toString(string delim)
{
	return this->nume + delim + this->data + delim +  this->locatie + delim + to_string(this->nrLoc) + delim + to_string(this->nrLocVandute);
}















