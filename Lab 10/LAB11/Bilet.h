#pragma once
#include <string>

using namespace std;
class Bilet {
protected:
	string nume;
	string data;
	string locatie;
	int nrLoc;
	int nrLocVandute;

public:
	Bilet();
	Bilet(string nume, string data, string locatie, int nrLoc, int nrLocVandute);
	Bilet(const Bilet& a);
	~Bilet();

	virtual Bilet* clone();

	string getNume();
	string getData();
	string getLocatie();
	int getNrLoc();
	int getNrLocVandute();
	void setNume(string nume);
	void setData(string data);
	void setLocatie(string locatie);
	void setNrLoc(int nrLoc);
	void setNrLocVandute(int NrLocVandute);
	Bilet& operator=(const Bilet& a);
	bool operator==(const Bilet& a);
	virtual string toString(string delim);
};