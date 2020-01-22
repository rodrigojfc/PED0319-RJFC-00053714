#include <iostream>
#include <string>
using namespace std;


//estructura a guardar
struct Appliance{
    string name;
    float price, sale_price;
};

//prototipo
int salePrice(Appliance* Array, int size, int aux);

int main(void){
    Appliance* array;
    int size = 0;
    float totalPice = 0.0;

    cout <<"Ingrese tamaño del arreglo: "; cin >> size;
    
    array = new Appliance[size];

    for (int i = 0; i < size; i++){
        cout <<"Ingrese nombre del producto: "; cin >> array[i].name;
        cout <<"Ingrese el costo: "; cin >> array[i].price;
        cout <<"Ingrese precio de venta: "; cin >> array[i].sale_price;
    }
    totalPice = salePrice(array, size, 0);
    cout << "El costo total es: " << totalPice << endl;


return 0;
}

int salePrice(Appliance* Array, int size, int aux){
    if (aux == size)
        return 0;
    else{
        return Array[aux].price + salePrice(Array, size, aux +1);
    }
}
