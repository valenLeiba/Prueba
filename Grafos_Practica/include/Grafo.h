#ifndef GRAFO_H
#define GRAFO_H
//#include "vertice.h"
#include "arco.h"
#include <list>
#include <set>
#include "iostream"



using namespace std;

class Grafo
{

    public:
        Grafo();
        void agregarNodo(char vertice1,char vertice2, int costo);
        void imprimirGrafo();
        void getArcos(char origen);

        void agregar_vertice(int verticeNuevo);
        void eliminar_vertice(int vertice);
        bool existe_vertice(int vertice) const;

        void agregar_arco(int origen, int destino, int costo);
        void eliminar_arco(int origen, int destino);
        bool existe_arco(int origen, int destino) const;
        int costo_arco(int origen, int destino) const;

//        void devolver_vertices(list<int> & vertices) const;
//        void devolver_adyacentes(int origen, list<Arco<int,C> > &adyacentes) const;



    private:
        list<int> vertices;
        list<arco> listaDeAdy;

};


#endif // GRAFO_H
