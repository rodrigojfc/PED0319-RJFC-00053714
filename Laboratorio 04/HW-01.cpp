#include <iostream> 
using namespace std;

//prototipo
void reverse_function(int num, int sum);

int main(void){
    int num, sum = 0;
    int reversed_number;

    cout <<"Ingrese numero a invertir: ";
    cin >> num;


    reverse_function(num, sum);
    

return 0;
}

//funcion recursiva para invertir numero
void reverse_function(int num, int sum){
   
    if (num == 0)
        cout << sum << endl;
    else{
    sum = sum*10; 
    sum = sum + num % 10;
    reverse_function(num/10, sum);   
    }
}

