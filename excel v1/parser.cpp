#include "parser.h"
#include <cstdlib>
parser::parser(string _texto)
{
    set_text(_texto);
}
arbolB* parser:: parsero()
{
    int c_lether=0;
    int c_point=0;
    arbolB * pa = new arbolB();
    string &a=texto;
    string ::iterator p=a.begin();
    while(p!=a.end())//tratar de hacer con for_each
    {
     if(!(isdigit(*p))&&((*p)!='.'))
        c_lether++;
     if((*p)=='.')
        c_point++;
        p++;
    }
    if(!c_lether&&c_point<2)
    {
        valor nu =atof(a.c_str());
        Nodo * p = new Nodo_number(nu);
        pa->insertarNodo(p);

    }
    return pa;

}
parser::~parser()
{
    //dtor
}
