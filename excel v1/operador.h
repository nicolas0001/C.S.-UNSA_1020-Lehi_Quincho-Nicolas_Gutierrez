#ifndef OPERADOR_H
#define OPERADOR_H
#include "Nodo.h"
typedef valor(*p_funcion)( valor,valor);

class operador
{
    public:
        operador( const p_funcion &,const prioridad & );
        operador();
        void set_p_funcion(const p_funcion &puntero);
        p_funcion  get_p_funcion();
        virtual prioridad get_priority()const;
        virtual ~operador();
    protected:
    private:

        prioridad m_prioridad;
        p_funcion m_puntero;
};

#endif // OPERADOR_H
