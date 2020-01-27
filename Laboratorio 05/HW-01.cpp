#include <iostream>
#include <string> // string types
using namespace std;


struct Product{
    string name;
    int cost;
    int amount;
};
typedef struct  Product product;

struct node{
    Product element;
    node *next;
};
typedef node *st;

int main(void){

    return 0;    
}

bool empty(st *s){
    return *s == NULL;
}


void initialize(st* s){
    s = NULL;
}

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

void push(st *s, Product e){
    struct node *unNodo = new struct node;
    unNodo->element = e;
    unNodo->next = *s;
    
    *s = unNodo;
}

Product top(st *s){
    if(!empty(s))
        return (*s)->element;
    else // Underflow!
        return {{" "},-1,-1};
}

