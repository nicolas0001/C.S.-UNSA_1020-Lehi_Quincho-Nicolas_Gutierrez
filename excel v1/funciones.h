#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Nodo.h"
#include "cmath"
namespace funciones
{
  inline  valor suma(valor a, valor b){return a+b;}
  inline  valor resta(const valor a,const valor b){return a-b;}
  inline  valor multiplcacion(const valor a,const valor b){return a*b;}
  inline  valor potencia (const valor a,const valor  b){return pow(a,b);}
};

#endif // FUNCIONES_H_INCLUDED
