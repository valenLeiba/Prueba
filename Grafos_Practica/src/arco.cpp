#include "arco.h"
#include <list>
#include "iostream"
using namespace std;
arco::arco()
{
    //ctor
}

const arco arco::setArco(int vertice1, int vertice2, int costoNuevo)
{
    this->costo=costoNuevo;
    this->origen=vertice1;
    this->destino=vertice2;

    return *this;
};

int arco::getOrigen()const{return this->origen;};
int arco::getDestino()const{return this->destino;};
int arco::getCosto()const{return this->costo;};


/*void arco::getArco()
{

    cout << "ORIGEN: " << this->origen << ", DESTINO: "<<this->destino << ", COSTO: "<< this->costo <<endl;
};*/
