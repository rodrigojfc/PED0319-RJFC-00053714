#include <iostream>
using namespace std;

//prototipos
int fibonacci(int N);



int main(void){
    int num = 0;
    int fibonnacciNum;

    cout << "Ingrese numero para evaluar la sucesion: "; cin >> num;
    while (num < 0){
    cout << "Ingrese numero mayor o igual a 0: "; cin>> num;

    }

    fibonnacciNum = fibonacci(num);

    cout << fibonnacciNum << endl;
    

    return 0;
}


//funcion recursiva fibonacci
int fibonacci(int N){
    if (N == 0)
        return 0;
    else if(N == 1)
        return 1;
    else{
        return fibonacci(N - 1) + fibonacci(N - 2);

     }
    
}