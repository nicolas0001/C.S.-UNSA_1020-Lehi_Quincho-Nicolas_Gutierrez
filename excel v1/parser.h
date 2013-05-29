#ifndef PARSER_H
#define PARSER_H
#include <string>
#include "arbolB.h"
#include "Nodo_number.h"
#include "celda.h"
#include "Nodo_cell.h"
#include "funciones.h"
#include "Nodo_operador.h"
using namespace std;
typedef string expresion;
class parser
{
    private:
        expresion texto;
    public:
        parser(expresion _texto);
        void set_text(expresion _texto){texto=_texto;};
        arbolB* parsero();
        virtual ~parser();

};

#endif // PARSER_H
