#pragma once
#include "cCalzado.h"
class cAlpargatas :
    public cCalzado
{
    string material;

public:
    cAlpargatas(string Material);
    string Arreglarse();
    ~cAlpargatas();



};

