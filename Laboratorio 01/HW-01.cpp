#include <iostream>
using namespace std;

int prime_sum();

int main(){
prime_sum();
}

int prime_sum(int n){
    int sum = 0;
    

    for (int i = 2; i <= n/2; i++, n++){
       if (n%i == 0) {
         sum = sum+i;
      }
 
}
cout<<"La suma de numeros primos es: " <<sum<<endl; 
}