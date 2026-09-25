#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir el arreglo
void imprimirArreglo(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Función de Ordenamiento por Selección
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Intercambio
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
        
        // Solo imprimir pasadas para listas pequeñas y legibles
        if (n <= 10) {
            cout << "Pasada " << i + 1 << ":" << endl;
            imprimirArreglo(arr);
            cout << endl;
        }
    }
}

void probarAlgoritmo(vector<int> lista, int numeroLista) {
    cout << "------------------------------------------------" << endl;
    cout << "Ordenando Lista " << numeroLista << " (Tamano: " << lista.size() << ")" << endl;
    cout << "Original: ";
    imprimirArreglo(lista);
    cout << endl;
    
    selectionSort(lista);
    
    if (lista.size() > 10) {
        cout << "Resultado Final (Lista " << numeroLista << "):" << endl;
        imprimirArreglo(lista);
    }
    cout << endl;
