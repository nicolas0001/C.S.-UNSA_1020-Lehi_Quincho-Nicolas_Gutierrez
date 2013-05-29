#ifndef Nodo_cell_H
#define Nodo_cell_H
#include "Nodo.h"
#include "celda.h"
class Nodo_cell:public Nodo
{
    public:
        Nodo_cell(celda * cell);
        Nodo_cell ();
        virtual ~Nodo_cell();
        virtual prioridad get_prioridad();
        virtual valor eval();
    protected:
    private:
      const  static prioridad m_prioridad=0;
      celda * m_celda_ptr;
};

#endif // Nodo_cell_H
