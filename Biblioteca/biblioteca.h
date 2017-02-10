#ifndef __BIBLIOTECA_H__
#define __BIBLIOTECA_H__

#include <stdio.h>
#include <list>
using namespace std;
#include "carte.h"

class Biblioteca
{
private:
	list<Carte*> _listaCarti;

public:
	void Adaugare(int codTemporar, char* pTitlu);
	void Catalogare(int codTemporar,int codFinal, char* pCategorie);
	void Imprumutare(int codInventar);
	void Returnare(int codInventar);
	void Inventar(time_t time);
	void Afisare();

private:
	Carte* Cautare(int cod);
};

#endif
