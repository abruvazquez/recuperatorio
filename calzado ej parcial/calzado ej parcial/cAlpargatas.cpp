#include "cAlpargatas.h"

cAlpargatas::cAlpargatas(string Material):cCalzado()
{
	material = Material;
	desc = "Alpargata";
}

string cAlpargatas::Arreglarse()
{
	string aux;
	aux = "Arreglando material...";
	return aux;
}

cAlpargatas::~cAlpargatas()
{
	
}
