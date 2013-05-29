#ifndef ARBOLB_H
#define ARBOLB_H
#include "Nodo.h"

class arbolB
{
    public:
        /** \brief es un constructor por valor
         * \param head Nodo* es su Nodo cabecera
         */
        arbolB(Nodo * head);
        /** \brief es un constructor por defecto
         */
        arbolB();
        /** \brief evalua el arbolB
         * \return el valor de la evaluacion
         */
        valor evalAB();
        /** \brief setea el puntero al nodo head
         *
         * \param  un puntero a main nodo
         * \return void
         *
         */

        void set_headptr(Nodo *  mainhead){headptr=mainhead;};
        /** \brief   es una  funcion get
         *
         * \return devuelve el puntero al nodo head
         *
         */

        Nodo * get_headptr(){return headptr;}
        /** \brief inserta el nodo  en el arbol
         *
         * \param entra un puntero al nodo que se ca i sertar
         * \return no retorna nada
         *
         */

        void insertarNodo(Nodo * Nodo);
        virtual ~arbolB();
    protected:
    private:
        Nodo * headptr;
};

#endif // ARBOLB_H
