#ifndef VERTICE_H
#define VERTICE_H

#include "string"

using namespace std;

class vertice
{
    public:
        vertice();
        char getDato();
        void setDato(int nuevoDato);
        void imprimirVertices();

    private:
        char dato;
};

#endif // VERTICE_H
