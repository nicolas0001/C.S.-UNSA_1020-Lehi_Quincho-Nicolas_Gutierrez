#include "arbolB.h"

arbolB::arbolB(Nodo * head )
{
    set_headptr(head);
}
arbolB :: arbolB()
{
    set_headptr(0);
}
valor arbolB :: evalAB()
{
    return headptr->eval();
}
void arbolB:: insertarNodo( Nodo * cell)//cell es la celda a insertar
{
     Nodo *&p=headptr ;
     if(!p)
     {
         p=cell;
         return;
     }
     if(p->get_prioridad() < cell->get_prioridad())
     {
         cell->set_NodoL(p);
         p=cell;
         return;
     }
     Nodo * temp=p;
     while(true)
     {
         if(!temp->get_NodoR())
         {
             temp->set_NodoR(cell);
             break;
         }
         if(temp->get_NodoR()->get_prioridad() < cell->get_prioridad())
         {
             cell->set_NodoL(temp->get_NodoR());
             temp->set_NodoR(cell);
             break;
         }
         temp=temp->get_NodoR();
     }
}

arbolB::~arbolB()
{
    //dtor
}
