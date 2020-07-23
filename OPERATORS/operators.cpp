// me cago en progrmacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "cFecha.h"
#include "cFraccion.h"
#include <string.h>//OPERATORS

using namespace std;


int main()
{
    cFecha* fecha0 = new cFecha(22,07,2020);
    cFecha* fecha10 = new cFecha(22, 07, 2020);
   
    cout<<(*fecha0 == *fecha10)<<endl; //con dinamic 


    cFecha fecha1(22,07,2020);//con static
    cFecha fecha2(10,07,2000);
    cFecha fecha3(22,07,2020);
    cout<<(fecha1==fecha2) << endl;
    cout<<(fecha1==fecha3)<<endl; 
  /*  fecha1++;*/ //PREGUNTAR COMO LLAMAR AL ++ Y EL -- PRE INCREMENTO Y DECREMENTO
    cout << (fecha1 < fecha2) << endl;
    cout << (fecha1 < fecha3)<<endl;
    cout << (fecha1 <= fecha3) << endl;
    cout << (fecha2 >= fecha3) << endl;
    cout << (fecha1 != fecha2) << endl;
    cout << (fecha1 != fecha3) << endl;
    cout << (fecha2 > fecha1) << endl;
    /*fecha2--;*/
    cout << ((cFecha&)fecha1);
    cin>>((cFecha&)fecha2);
    cout << fecha2<< endl;

    cFraccion frac1(1, 2), frac2(3, 2);
   cout<<( frac1 == frac2)<<endl;
   cout << (frac1 == 0.5) << endl;
   cout << (frac1 == "1.2") << endl;
   cout << (frac2 == "pepe") << endl;
   cout << (frac1 != frac2) << endl;
   cout << (frac1 < frac2) << endl;
   cout << (frac2 < frac1) << endl;
   cout << (frac1 >frac2) << endl;


}

