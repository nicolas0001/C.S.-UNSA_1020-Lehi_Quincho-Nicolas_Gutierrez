#include "Nodo_operador.h"

Nodo_operador::Nodo_operador(operador * m)
{
    m_operadorptr=m;
}
valor Nodo_operador :: eval()
{
    p_funcion a = m_operadorptr->get_p_funcion();
    valor R=m_ptrR->eval();
    valor L=m_ptrL->eval();
    return (*a)(L,R) ;
}

prioridad Nodo_operador :: get_prioridad()
{
    return m_operadorptr->get_priority();
}
Nodo_operador::~Nodo_operador()
{
    //dtor
}
