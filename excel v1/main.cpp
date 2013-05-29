#include <iostream>
#include "arbolB.h"
#include "Nodo_number.h"
#include "celda.h"
#include "Nodo_cell.h"
#include "funciones.h"
#include "Nodo_operador.h"
#include "parser.h"
using namespace std;
using namespace funciones;
int main()
{
    arbolB mythree;
    operador * s= new operador(funciones :: suma ,3);
    operador * m =new operador (funciones :: multiplcacion,2);
    Nodo * sumi=new Nodo_operador(s);
    Nodo * sumo=new Nodo_operador(m);
    Nodo * sum=new Nodo_operador(s);
    Nodo * q=new Nodo_number (2);
    Nodo * c=new Nodo_number (22);
    Nodo * w =new Nodo_number (456);
   /* mythree.insertarNodo(w);
    mythree.insertarNodo(sum);
    mythree.insertarNodo(q);
    mythree.insertarNodo(sumo);
    mythree.insertarNodo(c);
    //mythree.insertarNodo(sumo);
    //mythree.insertarNodo(v);*/
    string rpta;
    cin>>rpta;
    parser arg(rpta);
    if(arbolB * p=arg.parsero())
    {
        cout<<p->evalAB();
    }
    //valor a= mythree.evalAB();
    //valor b= (arg.parsero())->evalAB();
    //cout << "Hello wgregrorld!" <<a<<" "<<endl;
    return 0;
}
