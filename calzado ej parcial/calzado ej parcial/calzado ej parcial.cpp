#include <iostream>
#include "cAlpargatas.h"
#include"cCalzado.h"
#include"cFabricaCalzado.h"
#include"cZapatillas.h"
#include"cZapatos.h"
using namespace std;

int main()
{
	cFabricaCalzado* fabrica = new cFabricaCalzado();
	cCalzado* zapatilla=fabrica->Fabricar(ZAPATILLAS);
	cCalzado* alpargata = fabrica->Fabricar(ALPARGATAS);
	cCalzado* zapato = fabrica->Fabricar(ZAPATOS);
	cCalzado* zapatilla2 = fabrica->Fabricar(ZAPATILLAS);
	cCalzado* alpargata2 = fabrica->Fabricar(ALPARGATAS);
	cCalzado* zapato2 = fabrica->Fabricar(ZAPATOS);
	
	cout << (*zapatilla == *alpargata);
	cout<<(*zapatilla == *zapatilla2);//si la desc es la misma es porque son iguales los tipos de calzado
	cout << ((cCalzado&)*zapatilla);

	cout<<zapatilla->Arreglarse()<<endl;
	cout<<alpargata->Arreglarse()<<endl;
	cout << zapato->Arreglarse() << endl;





}

