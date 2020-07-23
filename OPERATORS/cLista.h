#pragma once
#include "cListaPersona.h"
#include <iostream>
#include <string>
#include <string.h>
#include "cPersona.h"
#define MAX 100

using namespace std;
class cLista
{
    cPersona** Lista;
    int TAM, CA;

   public:
   cLista(int TAM=MAX)
    {

        this->TAM = TAM;
        Lista = new cPersona * [TAM]; 

        for (int i = 0; i < TAM; i++)
        {
            Lista[i] = NULL; 
        }
        CA = 0;
    }
   bool Agregar(cPersona* persona)
    {
        if (CA == TAM)
            return false;
        int pos = getpos(persona->getclave());

        if (pos >= 0) 
            return false;
        Lista[CA] = persona;
        CA++;
        return true;
      

    }
   cPersona* Quitar(string clave)
    {
        int pos = NULL;
        pos = getpos(clave);
        if (pos < 0)
            return NULL;
        cPersona* aux = Lista[pos]; 
        for (int i = pos; i < CA - 1; i++)
        {
            Lista[i] = Lista[i + 1]; 
        }
        Lista[--CA] = NULL; 
        return aux; 
    }
   bool Eliminar(string clave)
    {
        cPersona* aux = Quitar(clave);
        if (aux == NULL)
            return false;  
        delete aux; 
        return true; 
    };
   cPersona* Buscar(string clave)
    {
        int pos = getpos(clave);
        if (pos < 0)
            return NULL; 
        return Lista[pos]; 
    }
   int getpos(string clave)
    {
        cPersona* aux = NULL;
        for (int i = 0; i < CA; i++)
        {
            aux = Lista[i];
            if (aux->getclave() == clave)

                return i;
        }
        return -1;
    }
   void Listar()
    {
        for (int i = 0; i < CA; i++)
        {
            Lista[i]->imprimir();
        }
    }
   ~cLista()
    {
        if (Lista!= NULL)
        {
            for (int i = 0; i < TAM; i++)
            {
                if (Lista[i]!= NULL)
                    delete Lista[i];
            }
            delete Lista; 
        }

    }

};

