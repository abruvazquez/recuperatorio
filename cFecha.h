#pragma once
#include <iostream>
#include <ostream>
using namespace std;
class cFecha
{
private:
	int dia, mes, anio;
public:
	cFecha(int dia, int mes, int anio) 
	{
		this->dia=dia;
		this->mes = mes;
		this->anio = anio;

	}
	bool operator==(cFecha& fecha) 
	{
		if (anio == fecha.anio && mes == fecha.mes && dia == fecha.dia)
			return true;
		else return false;
	}
	bool operator!=(cFecha& fecha)
	{
		return !(*this== fecha);
	}
	bool operator<(cFecha& fecha)
	{
		if (anio < fecha.anio)
			return true;
		else if (anio == fecha.anio && mes < fecha.mes)
			return true;
		else if (anio == fecha.anio && mes == fecha.mes && dia < fecha.dia)
			return true;
		else
			return false;

	}
	bool operator<=(cFecha& fecha) 
	{
		if (*this < fecha || *this == fecha)
			return true;
		else return false;
	}
	cFecha& operator++() 
	{
		dia++;
		return *this;
	}
	cFecha& operator--()
	{
		dia--;
		return *this;
	}
    bool operator>( cFecha& fecha2)
   {
	return!(*this <= fecha2);
    }
    bool operator>=(cFecha& fecha2)
   {
	return !(*this< fecha2);
   }
	int getdia() {return dia;};
	int getmes() {return mes;};
	int getanio() {return anio;};
	void setdia(int Dia);
	void setmes(int Mes);
	void setanio(int Anio);
};

