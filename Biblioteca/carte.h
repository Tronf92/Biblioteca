#ifndef __CARTE_H__
#define __CARTE_H__

#include "stare.h"

class Carte
{
	static const int DIM_DATA=26;
private:

	int _cod;
	char* _pTitlu;
	char* _pCategorie;
	Stare* _pStare;
	time_t _dataImprumut;

public:
	Carte(int cod, char* pTitlu);
	int CodCarte(){return _cod;}
	time_t DataImprumut(){return _dataImprumut;}
	bool Catalogare(int codFinal, char* _pCategorie);
	bool Imprumutare();
	bool Returnare();
	void Inventar(time_t timpInventar);
	void Afisare();
	void ModificaStare(Stare* pStareNoua);
};

#endif
