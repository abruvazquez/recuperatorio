// me cago en progrmacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "cFecha.h"
#include <string.h>//OPERATORS

using namespace std;
ostream& operator<<(ostream& out, cFecha& fecha);
istream& operator>>(istream& in, cFecha& fecha);
int main()
{
    cFecha fecha1(22,07,2020);
    cFecha fecha2(10,07,2000);
    cFecha fecha3(22,07,2020);
    cout<<(fecha1==fecha2) << endl;
    cout<<(fecha1==fecha3)<<endl; 
  /*  fecha1++;*/
    cout << (fecha1 < fecha2) << endl;
    cout << (fecha1 < fecha3)<<endl;
    cout << (fecha1 <= fecha3) << endl;
    cout << (fecha2 >= fecha3) << endl;
    cout << (fecha1 != fecha2) << endl;
    cout << (fecha1 != fecha3) << endl;
    cout << (fecha2 > fecha1) << endl;
    /*fecha2--;*/


}

ostream& operator<<(ostream& out, cFecha& fecha)
{
	out << "fecha: " << fecha.getdia() << "/" << fecha.getmes() << "/" << fecha.getanio() << endl;
	return out;

}
istream& operator>>(istream& in, cFecha& fecha)
{
	cout << "Ingrese el dia de la fecha: dia/mes/anio ";
	int aux1,aux2,aux3;
	char slash;
	in >> aux1 >> slash >> aux2 >> slash >> aux3;
    fecha.setdia(aux1);
    fecha.setdia(aux2);
	fecha.setdia(aux3);
	return in;
}