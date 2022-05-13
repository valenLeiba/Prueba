#ifndef ARCO_H
#define ARCO_H

#include "string"
#include <list>

using namespace std;

class arco
{
    public:
        arco();
        const arco setArco(int vertice1, int vertice2, int costoNuevo);
        void getArco();
        int getOrigen()const;
        int getDestino()const;
        int getCosto()const;

    private:
        int origen;
        int destino;
        int costo;
};

#endif // ARCO_H
