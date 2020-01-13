#include <iostream>

using namespace std;

int main(void)
{
    char secret[] = {'c', 'o', 'd', 'i', 'f', 'i', 'c', 'a', 'r'};
    char verification[9];
    char guessletter;

    int a = 13;
    cout << "Ahorcado" << endl;
    cout << "La palabra a adivinar tiene 9 letras" << endl;
    do
    {
        cout << "Letra: ";
        cin >> guessletter;

    } while (a > 0);

    return 0;
}

void verifyletter(char arr1[9], char arr2[9], char letter, int size)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr1[i] == letter)
        {
            arr2[i] = letter;
        }
    }
}