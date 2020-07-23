#pragma once
#include "cCalzado.h"
#include <iostream>
#define MAX 100

typedef enum
{
	ZAPATILLAS,
	ALPARGATAS,
	ZAPATOS,
}Tipo;

class cFabricaCalzado
{

protected:
	cCalzado** calzado;
	int TAM, CA;

public:
	cFabricaCalzado(int TAM=MAX);
	cCalzado* Fabricar(Tipo calzado);
	~cFabricaCalzado();
	int getpos(int codigo);
	cCalzado* operator[](int codigo);
	bool operator+(cCalzado*calzado);
};

istream& operator>>(istream& in, cCalzado& calzado);
