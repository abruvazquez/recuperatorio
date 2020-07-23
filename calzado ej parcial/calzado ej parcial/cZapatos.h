#pragma once
#include "cCalzado.h"
class cZapatos :
    public cCalzado
{
private:
    int tamtaco;
public:
    cZapatos(int Tamtaco);
    string Arreglarse();
    ~cZapatos();



};

