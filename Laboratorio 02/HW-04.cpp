//Solo
#include <iostream> // Input, Output
#include <string> //string types
#include <math.h>       /* pow */    

using namespace std;

//struct para guardar coeficientes de funcion cuadratica
struct Square{
    int a, b, c;
};


void roots(Square mvalue);

// Se piden los valores de los coeficientes
int main(void){
    Square variable;

    cout << "Ingrese el valor de 'a': "; cin >> variable.a;
    cout << "Ingrese el valor de 'b': "; cin >> variable.b;
    cout << "Ingrese el valor de la variable independiente 'c': "; cin >> variable.c;

    roots(variable);
    
return 0;
}


//se evalua el discriminante y se realizan las operaciones para obtener los valores de x
void roots(Square mvalue){
    int root_value;
    float x,x1, x2;

    root_value = pow(mvalue.b, 2) - (4 * (mvalue.a * mvalue.c));

    if (root_value < 0){
        cout << "La ecuacion no tiene solucion real" << endl;
    }
    else if(root_value == 0){
        x = (-mvalue.b)/(2 * mvalue.a);
        cout << "El valor de x: " << x << endl;
    }
    else{
        x1 = ((-mvalue.b) + sqrt(root_value))/(2 * mvalue.a);
        x2 = ((-mvalue.b) - sqrt(root_value))/(2 * mvalue.a);

        cout << "El valor de x1 es: " << x1 << endl;
        cout << "El valor de x2 es: " << x2 << endl;
    }

}
