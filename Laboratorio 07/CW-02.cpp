#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

enum genero
{
    a,
    b,
    c,
    d
};

struct canciones
{
    string titulo, cantante;
    genero gen;
    int duracion;
};
typedef canciones T;

int main(void)
{
    T aux;
    string titulo = "";
    string tit ="";
    vector<T> lista;
    queue<T> triste, feliz, dormir;
    int opcion = 0, auxEnum = 0;

    do
    {
        imprimirMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            cout << "Titulo:\t" << endl;
            getline(cin, aux.titulo);
            cout << "Genero (1 - a, 2 - b, 3 - c, 4 - d):\t" << endl;
            cin >> auxEnum;
            cin.ignore();
            auxEnum--;
            cout << "Cantante:\t" << endl;
            getline(cin, aux.cantante);
            aux.duracion = 0;
            do
            {
                cout << "Duracion:\t" << endl;
                cin >> aux.duracion;
                cin.ignore();

            } while (aux.duracion <= 0);
            lista.push_back(aux);
            break;

        case 2:
            cout <<"Cancion a eliminar:\t"; getline(cin, tit);
            for (auto iter = lista.begin(); iter != lista.end(); ++iter){
                if(iter->titulo.compare(tit))
                    iter = lista.erase(iter);
                else
                    iter++;
            }
            break;

        case 3:
            for (T elemento : lista)
            {
                cout << elemento.cantante << endl;
                cout << elemento.titulo << endl;
                cout << elemento.duracion << endl;
                switch (elemento.gen)
                {
                case a:
                    cout << 'a';
                    break;

                case b:
                    cout << 'b';
                    break;

                case c:
                    cout << 'c';
                    break;

                case d:
                    cout << 'd';
                    break;
                }
            }
            cout << endl;
            break;

        case 4:
            cout << "cancion a buscar:\t";
            getline(cin, titulo);

            cout << "Agregar en (1 - triste, 2 - feliz, 3 - dormir):\t";
            cin >> auxEnum;
            cin.ignore();
            switch(auxEnum){
                case 1: 
                    buscarElemento(lista, &triste, tit);
                    break;
                case 2:
                    buscarElemento(lista, &feliz, tit);
                    break;
                case 3: 
                    buscarElemento(lista, &dormir, tit);
                    break;
            }

            break;
        }

    } while (opcion != 0);
}

void imprimirMenu(void)
{
    cout << "1.\tAgregar cancion" << endl;
    cout << "2.\tEliminar cancion" << endl;
    cout << "3.\tMostrar canciones" << endl;
    cout << "4.\tBuscar la cancion" << endl;
    cout << "0.\tSalir" << endl;
    cout << "Su opcion:\t";
}

void  buscarElemento(vector<T> canciones, queue<T>* cola, string tit){
    for(T elemento : canciones){
        if(elemento.titulo.compare(tit) == 0){
            cout << "Cancion encontrada";
            (*cola).push(elemento);
            return;
        }
    }
    cout << "cancion no encontrada" << endl;
}