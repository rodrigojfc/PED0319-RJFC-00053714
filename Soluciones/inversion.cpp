#include <iostream>
using namespace std;

void invertirArreglo(int *A, int *B, int size);

int main(void)
{
    int size = 0;
    cout << "Tamaño del arreglo: ";
    cin >> size;

    while (size < 2)
    {
        cout << "Error" << endl;
        return 0;
    }

    int *A, *B;

    A = new int[size];
    B = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Valor: ";
        cin >> A[i];
    }

    invertirArreglo(A, B, size);

    cout << "Arreglo A: " << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "Arreglo B: " << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << B[i] << "\t";
    }

    return 0;
}

void invertirArreglo(int *A, int *B, int size)
{
    int aux = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        B[aux] = A[i];
        aux++;
    }
}