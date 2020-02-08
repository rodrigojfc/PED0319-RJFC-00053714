#include <iostream> //Input and Output
#include <string> // string types
using namespace std;


//Estructuras a utilizar
struct person{
    string name, lastName;
    int dui;
};

struct node{
    person human;
    node*left, * right;
};

//prototipos
void insertInTree(node** tree, person word);
node* createLeaf(person word);


int main(void){
    int option = 0;
    //Estructura auxiliar para guardar informacion
    person auxPerson;

    node* pTree = NULL;

    do{
        cout <<"\n1. Agregar nueva persona\n";
        cout <<"0. Salir\n";
        cout <<"Su opcion:\t"; cin >> option; cin.ignore();

        switch (option)
        {
        case 1:
            cout <<"Ingrese nombre:\t"; getline(cin, auxPerson.name);
            cout <<"Ingrese el apellido:\t"; getline(cin, auxPerson.lastName);
            cout <<"Ingrese dui:\t"; cin >> auxPerson.dui; cin.ignore();
            insertInTree(&pTree, auxPerson);

            break;
        
        case 0:
        option = 0;
        break;
            
        default:
            break;
        }
    }while(option != 0);

    return 0;
}

//Funcion que crea la raiz del arbol 
node* createLeaf(person word){
    node* leaf = new node;
    leaf->human = word;

    //se inicializan los punteros en Null
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

//Funcion recursiva para agregar nuevos elementos al arbol
void insertInTree(node** tree, person word){
    if(!(*tree)){
        *tree = createLeaf(word);
    }
    else{
        //criterio para ordenar nuevas entradas de acuerdo al apellido
        if(word.lastName.compare((*(*tree)).human.lastName) <= 0)
            insertInTree(&(*(*tree)).left, word);
        else
            insertInTree(&(*(*tree)).right, word);
    }
}
