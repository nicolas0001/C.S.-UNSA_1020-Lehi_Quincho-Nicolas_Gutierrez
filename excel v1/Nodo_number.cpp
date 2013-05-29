#include "Nodo_number.h"

Nodo_number:: Nodo_number(const valor &a)
{
    m_valor =a;
}
valor Nodo_number ::eval()
{
 return m_valor;
}
prioridad Nodo_number :: get_prioridad()
{
 return m_prioridad;
}
Nodo_number::~Nodo_number()
{
}
