#include <iostream>
#include <list>

/// PROGRAMA PARA CREAR UNA LISTA DE LETRAS, IMPRIMIRLAS POR PANTALLA Y BUSCAR UNA LETRA (SIMPLE);


using namespace std;

void agregarLetras(list<char> &laLista) //POR CADA LETRA INGRESADA POR EL USUARIO LA AGREGA AL FINAL DE LA LISTA
{
char nueva=' ';


    cout<< "Ingrese una letra: (Para salir ingrese un 0) ";
    cin >> nueva;
    while (nueva!='0')
    {
        system("cls");
        //AGREGA AL FINAL DE LA LISTA CADA LETRA NUEVA
        laLista.push_back(nueva);
        cout<< "Ingrese una letra: (Para salir ingrese un 0) ";
        cin >> nueva;

    }
    return;
};

void mostrarLista(list<char> &laLista)
{
  //  list<char>::iterator it = laLista.begin();

    cout << "La lista es la siguiente:" << endl;

   /* while(it!=laLista.end())
    {
        cout << *it << " ";
    }*/
    // CON AUTO SE DECLARA UNA NUEVA VARIABLE DEL TIPO DE VARIABLE DESPUES DEL =
    for(auto it=laLista.begin(); it!=laLista.end(); it++)
    {
        cout << *it << '_';
    }
    return;
};

void existeLetra(list<char> &laLista)
{
char buscada;
int pos=0;
auto it = laLista.begin();

    cout<<"Ingrese la letra buscada: ";
    cin >> buscada;
    while(it!=laLista.end() and (*it!=buscada))
    {
        pos++;
        it++;
    }

    if(it == laLista.end())
    {
        cout<< "La letra no fue encontrada." << endl;
    }
    else
        cout << "La letra '" << buscada << "' fue encontrada por primera vez en la posicion " << pos+1 << endl;


        return;
};


int main()
{
//CREA UNA LISTA DE LETRAS
list<char> listaLetras;

    agregarLetras(listaLetras);
    mostrarLista(listaLetras);
    cout << endl;
    existeLetra(listaLetras);

    return 0;
}
