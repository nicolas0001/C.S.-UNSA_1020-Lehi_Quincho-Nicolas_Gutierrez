#ifndef Nodo_operador_H
#define Nodo_operador_H
#include "Nodo.h"
#include "operador.h"

class Nodo_operador: public Nodo
{
    public:
        Nodo_operador(operador * m);
        virtual ~Nodo_operador();
        virtual double eval();
        virtual prioridad get_prioridad();
    protected:
    private:
        operador * m_operadorptr;
};

#endif // Nodo_operador_H
