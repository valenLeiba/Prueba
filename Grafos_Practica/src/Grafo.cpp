#include "Grafo.h"

#include <list>
#include "arco.h"
#include "string"
#include "iostream"

using namespace std;

Grafo::Grafo(){};
///----------------------------NO TOCAR NADA, YA ANDA----------------------
void Grafo::imprimirGrafo()
{
    list<int>::const_iterator it1=vertices.begin();
    list<arco>::const_iterator it2=listaDeAdy.begin();

    while(it1!=vertices.end())
    {


        while(it2!=listaDeAdy.end() && (*it1 == it2->getOrigen()))
        {
            cout << *it1 << " => ";
            cout << it2->getDestino() << ", COSTO: " << it2->getCosto();
            cout<< endl;
            it2++;
        }

        cout<< endl;
        it1++;
    }
};

void Grafo::agregar_vertice(int verticeNuevo)
{
    if(this->vertices.empty())
    {
        vertices.push_back(verticeNuevo);
    }else
    {
        list<int>::const_iterator it=vertices.begin();

        while(it!=vertices.end() && *it!=verticeNuevo)
            it++;
        if(it==vertices.end())
            vertices.push_back(verticeNuevo);
    }
};

void Grafo::agregar_arco(int origen, int destino, int costo)
{
    this->agregar_vertice(origen);
    arco arcoNuevo;
    arcoNuevo = arcoNuevo.setArco(origen, destino, costo);

    this->listaDeAdy.push_back(arcoNuevo);
};
///-------------------------------------------------------------------

/*void Grafo::getArcos(char origen)
{
};

void Grafo::agregarNodo(char vertice1, char vertice2, int costo)
{

    if (this->vertices.empty())
    {
        list<vertice>::const_iterator it= vertices.begin();
        this->vertices.push_back('A');
        listaDeAdy.push_back(arco.setArco(vertice1, vertice2, costo)))
    }
}
void imprimirGrafo()
{
    list<vertice>::const_iterator it= vertices.begin();
    list<arco>::const_iterator it2= listaDeAdy.begin();
}*/
