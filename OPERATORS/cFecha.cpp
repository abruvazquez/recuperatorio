#include "cFecha.h"

void cFecha::setdia(int Dia)
{
	dia = Dia;
}

void cFecha::setmes(int Mes)
{
	mes = Mes;
}

void cFecha::setanio(int Anio)
{
	anio = Anio;
}

ostream& operator<<(ostream& out, cFecha& fecha)
{
		out << "fecha: " << fecha.getdia() << "/" << fecha.getmes() << "/" << fecha.getanio() << endl;
		return out;
			
}

istream& operator>>(istream& in, cFecha& fecha)
{
	cout << "Ingrese el dia de la fecha: dia/mes/anio ";
	int aux1, aux2, aux3;
	char slash;
	in >> aux1 >> slash >> aux2 >> slash >> aux3;
	fecha.setdia(aux1);
	fecha.setmes(aux2);
	fecha.setanio(aux3);
	return in;
}
