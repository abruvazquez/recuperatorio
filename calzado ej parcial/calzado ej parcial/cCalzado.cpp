#include "cCalzado.h"

cCalzado::cCalzado():horma("angosta")
{
	talle = 37;
	color = "negro";
	cordones = true;
	desc = " ";
	cod++;
}

int cCalzado::cod = 0;
void cCalzado::settalle(float Talle)
{
	talle = Talle;
}

void cCalzado::setcolor(string Color)
{
	color = Color;

}

void cCalzado::setcordones(bool Cordones)
{
	cordones =	Cordones;
}

cCalzado::~cCalzado()
{
}

bool cCalzado::operator==(cCalzado& calzado)
{
	if (desc == calzado.desc)
		return true;
	else
		return false;

}



ostream& operator<<(ostream& out, const cCalzado& calzado)
{
	out << "Datos del calzado: talle" << calzado.talle << "color:" << calzado.color << endl;
	return out;

}
