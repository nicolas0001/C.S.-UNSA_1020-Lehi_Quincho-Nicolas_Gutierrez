#ifndef M_ESPARSA_H
#define M_ESPARSA_H
#include "celda.h"

class M_esparsa
{
    public:
        M_esparsa();
        virtual ~M_esparsa();
        void insertar(celda * cell);
        celda * get_colum(int n){ return m_Horizontal[n];}
        celda * get_row(int n){ return m_Vertical[n];}
    private:
        void insertarH(celda * cell);
        void insertarV(celda * cell);
        vector<celda *> m_Horizontal;//este es un vector que contienepunteos a las celdas usadas debajo de ella
        vector<celda *> m_Vertical;//este es un vector que contienepunteos a las celdas usadas a su derecha

};

#endif // M_ESPARSA_H
