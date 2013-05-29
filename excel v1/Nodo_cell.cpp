#include "Nodo_cell.h"

Nodo_cell::Nodo_cell()
{
    //ctor
}
Nodo_cell :: Nodo_cell(celda * cell)
{
    m_celda_ptr=cell;
}
prioridad Nodo_cell :: get_prioridad()
{
    return m_prioridad;
}
valor Nodo_cell :: eval()
{
    valor a= m_celda_ptr->evaluar();
    return a;
}
Nodo_cell::~Nodo_cell()
{
    //dtor
}
