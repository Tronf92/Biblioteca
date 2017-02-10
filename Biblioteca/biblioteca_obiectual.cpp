#include "biblioteca.h"

int main()
{
	Biblioteca b;
	b.Adaugare(1,"Dune");
	b.Adaugare(2,"Istoria Frantei");
	b.Afisare();
	b.Catalogare(2,1002,"Istorie");
	b.Catalogare(1,1001,"S.F.");
	b.Afisare();
	b.Imprumutare(1002);
	b.Afisare();
	b.Inventar(time(0)+2*SECUNDE_IN_14_ZILE);
	b.Afisare();
	b.Returnare(1002);
	b.Afisare();
	getchar();
	return 0;
}
