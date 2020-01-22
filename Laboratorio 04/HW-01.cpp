#include <iostream>
#include <math.h>
using namespace std;

int reverse_function(int num);

int main(void){
    int num;
    int reversed_number;

    cout <<"Ingrese numero a invertir: ";
    cin >> num;


    reversed_number =  reverse_function(num);
    cout << reversed_number << endl;

return 0;
}

int reverse_function(int num){
    static int sum = 0;
   
    if (num == 0)
        return 0;
    
    sum = sum*10; 
    sum = sum + num % 10;
    reverse_function(num/10);
    
    return sum;
}

