#include <iostream>
#include <string> // string types
using namespace std;


//estructura a guardar
struct Appliance{
    string name;
    float price, sale_price;
};

//prototipo
int salePrice(Appliance* Array, int size, int aux, int choice);

int main(void){
    Appliance* array;
    int size = 0;
    float totalPice = 0.0;
    int choice = 0;

    cout <<"Ingrese tamaño del arreglo: "; cin >> size;
    
    array = new Appliance[size];

    for (int i = 0; i < size; i++){
        cout <<"Ingrese nombre del producto: "; cin >> array[i].name;
        cout <<"Ingrese el costo: "; cin >> array[i].price;
        cout <<"Ingrese precio de venta: "; cin >> array[i].sale_price;
    }
    cout << "1 -Total Precio de venta"<<endl;
    cout << "2- Total costo"<<endl;
    cout << "Seleccion:\t";
    cin >> choice;
    totalPice = salePrice(array, size, 0, choice);

    cout << "El costo total es: " << totalPice << endl;


return 0;
}

//Funcion para calcular el costo total
int salePrice(Appliance* Array, int size, int aux, int choice){
    
    if (aux == size)
        return 0;
    else if (choice == 1){
        return Array[aux].sale_price + salePrice(Array, size, aux +1, choice);
            
    }
    else{
        return Array[aux].price + salePrice(Array, size, aux +1, choice);
    }
    
}

