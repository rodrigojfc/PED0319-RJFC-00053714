#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>   

using namespace std; 

int main(){
    int sum = 0;
    srand (time(NULL));
    int my_list [15];
    for (int i = 0; i < 15; i++){
        my_list[i]= rand() % 75 + 1;
        cout << " | "<<my_list[i];
        if(my_list[i]%7 == 0){
            sum = sum + my_list[i];
        }
    } 
    cout<<endl;
    cout<<"La suma de los multiplos de 7 es: "<<sum<<endl;

}