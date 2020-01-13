#include <iostream>
using namespace std;

int sum_prime();

int main(){
    sum_prime();
}

int sum_prime(){
    int num, div;
     int suma=0;
     for (num=2; num<100; num++)
       {
       for (div=2; num%div!=0; div++);
       if (div == num)
         {
         suma=suma+num;
         }
       }
     cout<<"\n \tLa suma de los numeros primos es: "<<suma<<endl;  
     }


