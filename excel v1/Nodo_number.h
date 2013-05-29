#ifndef Nodo_number_H
#define Nodo_number_H
#include "Nodo.h"

class Nodo_number: public Nodo
{
    public:
        Nodo_number(const valor& a);
        virtual valor eval();
        virtual prioridad get_prioridad();
        ~Nodo_number();
    protected:
    private:
        valor m_valor;
        const static prioridad m_prioridad=0;
};

#endif // Nodo_number_H
