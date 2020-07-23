#include "cZapatos.h"

cZapatos::cZapatos(int Tamtaco):cCalzado()
{
	tamtaco = Tamtaco;
	desc = "Zapato";
}

string cZapatos::Arreglarse()
{
	string aux;
	aux = "Arreglando taco...";
	return aux;
}

cZapatos::~cZapatos()
{
}
