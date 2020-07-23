#include "cFabricaCalzado.h"
#include "cAlpargatas.h"
#include "cZapatos.h"
#include "cZapatillas.h"

cFabricaCalzado::cFabricaCalzado(int TAM)
{
	calzado = new cCalzado*[TAM];
	for (int i = 0; i < TAM; i++)
	{
		calzado[i] = NULL;
	}
	this->TAM = TAM;
	CA = 0;
};


cCalzado* cFabricaCalzado::Fabricar(Tipo cal)
{

	if (cal == Tipo::ZAPATILLAS)
	{
		cCalzado* zapa = new cZapatillas();
		cin >> ((cCalzado&)zapa);
		calzado + zapa;
		return zapa;
	}

	else if (cal == Tipo::ALPARGATAS)
	{
		cCalzado* alpargata = new cAlpargatas("Alpaca");
		cin >> ((cCalzado&)alpargata);
		calzado+ alpargata;
		return alpargata;
	}

	else if (cal == Tipo::ZAPATOS)
	{
		cCalzado* zapato = new cZapatos(2);
			cin >> ((cCalzado&)zapato);
		    + zapato;
			return zapato;
	}

	 
}

int cFabricaCalzado::getpos(int codigo)
{
	cCalzado* aux = NULL;
	for (int i = 0; i < CA; i++)
	{
		aux = calzado[i];
		if (aux->getcod() == codigo)

			return i;
	}
	return -1;
}

cCalzado* cFabricaCalzado::operator[](int codigo)
{
	int pos = getpos(codigo);
	if (pos < 0)
		return NULL; // no existe esa persona
	return calzado[pos]; // devuelvo posición de la persona
}

bool cFabricaCalzado::operator+(cCalzado* cal)
{
	if (CA == TAM)
		return false;
	int pos = getpos(cal->getcod());
	if (pos >= 0)
		return false;

	calzado[CA] = cal;
	CA++;
	return true;
}


cFabricaCalzado::~cFabricaCalzado()
{
	if (calzado != NULL)
	{
		for (int i = 0; i < CA; i++)
		{
			if (calzado[i] = NULL)
				delete calzado[i];
		}
		delete calzado;//va a borrar mi lista 
	}
}

istream& operator>>(istream& in, cCalzado& calzado)
{	
	float aux;
	cout << "ingrese talle" << endl;
	in >> aux;
	calzado.settalle(aux);
	/*cout << "ingrese color" << endl;
	cin >> color;
	calzado.setcolor(color);
	cout << "ingrese si tiene cordones" << endl;
	cin >> cordones;
	calzado.setcordones(cordones);	*/
	return in;
}
