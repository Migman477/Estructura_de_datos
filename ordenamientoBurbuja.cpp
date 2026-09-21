#include <iostream>

using namespace std;

void burbuja(int numeros[], int n) {
    int comparaciones = 0;
    int intercambios = 0;

    for (int i = 0; i < n - 1; i++) {
       
        bool intercambio = false; 

        for (int j = 0; j < n - i - 1; j++) {
            comparaciones++; 
            
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
                
                intercambios++; 
                intercambio = true;
            }
        }


        cout << "Pasada " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << numeros[k] << " ";
        }
        cout << endl;


    }

   
    cout << "\nElementos: " << n << "\n\n";
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;
}

int main() {
 
    int arreglo[] = {5, 1, 4, 2, 8};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);


    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\n\n";


    burbuja(arreglo, n);


    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}