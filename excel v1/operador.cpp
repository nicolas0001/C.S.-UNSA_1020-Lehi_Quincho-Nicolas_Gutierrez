#include "operador.h"

operador::operador( const p_funcion & puntero,const prioridad & m_priority)
{
    m_puntero=puntero;
    m_prioridad=m_priority;
}
operador ::operador()
{
    m_puntero =0;
}
p_funcion operador :: get_p_funcion()
{
    return m_puntero;
}
prioridad operador :: get_priority()const
{
    return m_prioridad;
}
void operador :: set_p_funcion(const  p_funcion & puntero)
{
    m_puntero=puntero;
}
operador::~operador()
{
}
