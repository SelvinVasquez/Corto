#include <iostream>
using namespace std;
int main() {
    int size;
a
    cout << "Ingrese la cantidad de numeros: ";
    cin >> size;

    int numeros[size];

    for (int i = 0; i < size; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (numeros[j] > numeros[j+1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    cout << "Numeros ordenados de menor a mayor: ";
    for (int i = 0; i < size; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
