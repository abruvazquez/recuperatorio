#pragma once
#include "cCalzado.h"
class cZapatillas :
    public cCalzado
{
protected:
    bool caire;
    bool arco;

public:
    cZapatillas(bool Caire=true, bool Arco=true);
    string Arreglarse();
    ~cZapatillas();
    friend ostream& operator<<(ostream& out, const cZapatillas& calzado);
};
ostream& operator<<(ostream& out, const cZapatillas& calzado);


