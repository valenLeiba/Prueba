#include <iostream>
#include <list>
#include "Grafo.h"
#include "vertice.h"
#include "arco.h"
#include "string"

/**
    ~Implementacion de grafo como lista de lista,
     estuve una semana habil tratando de implementar esta porqueria
*/

using namespace std;

int main(int argc, char **argv)
{
Grafo caminos;

    caminos.agregar_arco(1,2,10);
    caminos.agregar_arco(1,4,20);
    caminos.agregar_arco(2,3,30);
    caminos.agregar_arco(2,4,40);
    caminos.agregar_arco(3,2,50);
    caminos.agregar_arco(4,3,60);
    caminos.agregar_arco(4,5,70);
    caminos.agregar_arco(4,6,80);
    caminos.agregar_arco(5,3,80);
    caminos.agregar_arco(6,3,80);

    caminos.imprimirGrafo();


/*    caminos.agregarNodo('1', '2', 10);
  //  caminos.imprimirGrafo();*/
    system("PAUSE");
    return 0;

};
