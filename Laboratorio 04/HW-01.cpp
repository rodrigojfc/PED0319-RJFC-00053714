#include <iostream>
#include <math.h>
using namespace std;

void reverse_function(int num);

int main(void){
    int num;

    cout <<"Ingrese numero a voltear: ";
    cin >> num;


    reverse_function(num);

return 0;
}

void reverse_function(int num){
    int sum = 0, rem; 
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      cout << sum;
   cout << sum;
}
