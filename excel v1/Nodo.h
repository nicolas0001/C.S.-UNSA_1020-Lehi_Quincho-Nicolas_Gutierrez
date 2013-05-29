#ifndef Nodo_H
#define Nodo_H

typedef double valor;
typedef int prioridad;

class Nodo
{
    public:
        Nodo();
        virtual ~Nodo();
        virtual valor eval()=0;
        virtual prioridad get_prioridad()=0;
        void set_NodoR(Nodo * HR){m_ptrR=HR;}
        void set_NodoL(Nodo * HL){m_ptrL=HL;}
        Nodo * get_NodoR(){return m_ptrR;}
    protected :
        Nodo * m_ptrR;
        Nodo * m_ptrL;
};

#endif // Nodo_H
