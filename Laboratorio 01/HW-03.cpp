#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int strin_g(char a[]){
    int i = 0;
    int value;
  while (a[i])
  {
    if (isalpha(a[i])) {
        value = -1;
        i++;
        }
    else if(isdigit(a[i])){
        value = 1;
        i++;
    }
    else{
        value = 0;
        i++;
    }
    i++;
  }
cout<<"El valor de la cadena es: "<< value<<endl;
}


int main(void){
int i = 0;
char str [] ="";
 cout<<"\t Ingrese una palabra: "<<endl;
 cin>>str;
 strin_g(str);

return 0;
}