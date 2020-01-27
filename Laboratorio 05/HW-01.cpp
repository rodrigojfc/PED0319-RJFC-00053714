#include <iostream>
#include <string> // string types
using namespace std;

//estructura para el producto
struct Product{
    string name;
    float cost;
    int amount;
};
typedef struct  Product product;

//Estructura para pila  
struct node{
    Product element;
    node *next;
};
typedef node *st;


//Prototipo de funciones
void initialize(st *s);
bool empty(st *s);
void push(st *s, Product e);
Product pop(st *s);
Product top(st *s);

int main(void){

    //se crea pila vacia
    st productStack;
    st spareStack;
    initialize(&productStack);
    int option;
    //Agregando productos

    do{

        cout <<"\nDesea agregar producto: "<< endl;
        cout <<"1-) Agregar producto"<< endl;
        cout <<"2-) Salir "<< endl; 
        cout <<"Su seleccion: ";cin>> option; cin.ignore();
        product aProduct;

        switch(option){
            case 1:
                cout <<"Nombre del producto: "; getline(cin, aProduct.name);
                cout <<"Costo del producto: "; cin >> aProduct.cost; cin.ignore();
                aProduct.amount++;
                break;
            case 2:
            break; 

        }

    }while(option != 2);

    return 0;    
}



//Funcion para ver si pila esta vacia   
bool empty(st *s){
    return *s == NULL;
}

//Funcion que inicializa la pila    
void initialize(st* s){
    s = NULL;
}


//Funcion para eliminar elementos a la pila
Product pop(st *s){
    if(!empty(s)){
        struct node *unNodo = *s;
        Product e = (*s)->element;
        *s = (*s)->next;
        delete(unNodo);
        return e;
    }
    else // Underflow!
        return {{" "},-1,-1};
}


//Funcion para agregar elementos a la pila
void push(st *s, Product e){
    struct node *unNodo = new struct node;
    unNodo->element = e;
    unNodo->next = *s;
    
    *s = unNodo;
}


//revisa el primer elemento de la pila
Product top(st *s){
    if(!empty(s))
        return (*s)->element;
    else // Underflow!
        return {{" "},-1,-1};
}

