#include <iostream>
#include <cmath>
using namespace std;

struct Monomio
{
    float coeficiente, exponente;
};

float evaluate(Monomio *array, int size, int aux);

int main(void)
{
    Monomio *polinomio;
    int size = 0;
    cout << "Ingrese el numero de monomios a evaluar: ";
    cin >> size;

    polinomio = new Monomio[size];

    for (int i = 0; i < size; i++)
    {
        cin >> polinomio[i].coeficiente >> polinomio[i].exponente;
    }

    cout << evaluate(polinomio, size, 0);

    return 0;
}

float evaluate(Monomio *array, int size, int aux)
{
    if (aux == size)
        return 0;
    else
    {
        return pow(array[aux].coeficiente, array[aux].exponente) + evaluate(array, size, aux + 1);
    }
}