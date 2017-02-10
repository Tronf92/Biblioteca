#ifndef __STARE_H__
#define __STARE_H__

#include <time.h>
#define SECUNDE_IN_14_ZILE (16*24*60*60)

class Carte;


class Stare
{
public:
	virtual char* DenumireStare(){return "";}
	virtual bool Catalogare(Carte* pCarte);
	virtual bool Imprumutare(Carte* pCarte);
	virtual bool Returnare(Carte* pCarte);
	virtual void Inventar(Carte* pCarte,time_t timpInventar);
};

class Pregatire:public Stare
{
public:
	virtual char* DenumireStare()
	{
		return "PREGATIRE";
	}
	virtual bool Catalogare(Carte* pCarte);
};

class Disponibila:public Stare
{
public:
	virtual char* DenumireStare()
	{
		return "DISPONIBILA";
	}
	virtual bool Imprumutare(Carte* pCarte);

};

class Imprumutata: public Stare
{
public:
	virtual char* DenumireStare()
	{
		return "IMPRUMUTATA";
	}
	virtual void Inventar(Carte* pCarte, time_t timpInventar);
	virtual bool Returnare(Carte* pCarte);
};

class Intarziata:public Stare
{
public:
	virtual char* DenumireStare()
	{
		return "INTARZIATA";
	}
	virtual bool Returnare(Carte* pCarte);
};

#endif

