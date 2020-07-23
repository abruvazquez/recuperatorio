#include "cZapatillas.h"

cZapatillas::cZapatillas(bool Caire,bool Arco):cCalzado()
{
	caire = Caire;
	arco = Arco;
	desc = "zapatilla";
}

string cZapatillas::Arreglarse()
{
	string aux;
	aux= "Arreglando camar de aire...";
	return aux;
}

cZapatillas::~cZapatillas()
{
}

ostream& operator<<(ostream& out, const cZapatillas& zapa)
{
	out << ((cCalzado&)zapa);
	return out;

}