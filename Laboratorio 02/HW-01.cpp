#include <iostream>
#include <string> //string types
using namespace std;

struct Customerdata{
    string name, lastname;

};

int main(void){
    Customerdata *personArr;
    int size;

    cout << "Ingrese la cantidad de clientes: "; cin >> size;    
    
    personArr = new Customerdata[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Ingrese el nombre del cliente:\t";
        cin >> personArr[i].name;
        cout <<"Ingrese el apellido:\t";
        cin >> personArr[i].lastname;
    }
return 0;
}
