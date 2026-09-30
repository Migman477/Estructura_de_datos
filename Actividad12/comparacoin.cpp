#include <iostream>
#include <vector>

using namespace std;

void imprimirArreglo(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    long long comparaciones = 0; 
    long long intercambios = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        
        for (int j = i + 1; j < n; j++) {
            comparaciones++; // Contamos cada comparación
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Intercambio
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            intercambios++; // Contamos el intercambio real
        }
        
        if (n <= 10) {
            cout << "Pasada " << i + 1 << ":" << endl;
            imprimirArreglo(arr);
            cout << endl;
        }
    }
    
    cout << "Comparaciones hechas: " << comparaciones << endl;
    cout << "Intercambios hechos: " << intercambios << endl;
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
}

int main() {
    vector<vector<int>> listas = {
        {8, 3, 7, 4, 2, 9, 1, 6, 5},
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {9, 8, 7, 6, 5, 4, 3, 2, 1},
        {1, 2, 3, 5, 4, 6, 7, 8, 9},
        // Lista 5 de 100 elementos
        {847, 132, 596, 421, 73, 905, 268, 714, 359, 51, 683, 194, 772, 315, 638, 27, 481, 856, 203, 749, 564, 118, 932, 377, 690, 245, 813, 96, 527, 341, 765, 182, 604, 459, 88, 721, 296, 547, 11, 879, 403, 156, 634, 285, 998, 367, 529, 62, 746, 213, 591, 824, 174, 438, 957, 326, 705, 39, 681, 251, 519, 903, 147, 612, 334, 778, 225, 864, 93, 476, 542, 719, 184, 653, 309, 987, 71, 395, 829, 263, 608, 116, 451, 936, 278, 697, 33, 583, 762, 149, 875, 224, 514, 68, 946, 382, 727, 197, 556, 811},
        // Lista 6 de 100 elementos
        {394, 827, 156, 643, 72, 918, 235, 501, 769, 43, 682, 314, 957, 128, 846, 291, 574, 9, 735, 462, 803, 177, 629, 354, 996, 215, 488, 761, 92, 537, 681, 346, 815, 264, 598, 731, 119, 425, 884, 57, 623, 308, 947, 186, 516, 793, 68, 371, 659, 242, 899, 137, 782, 453, 326, 704, 21, 561, 839, 275, 614, 983, 105, 478, 352, 726, 191, 875, 41, 667, 298, 549, 912, 164, 387, 755, 81, 528, 694, 333, 973, 224, 607, 146, 438, 869, 52, 781, 317, 645, 253, 590, 708, 98, 413, 954, 182, 521, 611, 886},
        // Lista 7 de 100 elementos
        {621, 84, 937, 315, 476, 152, 803, 27, 694, 548, 371, 916, 203, 765, 439, 58, 827, 286, 603, 119, 972, 341, 714, 65, 529, 881, 247, 398, 756, 173, 634, 22, 845, 462, 709, 134, 953, 317, 581, 96, 428, 773, 251, 607, 862, 44, 695, 328, 517, 789, 186, 934, 73, 556, 402, 918, 145, 671, 263, 849, 36, 725, 491, 608, 157, 883, 294, 532, 761, 113, 647, 354, 905, 218, 779, 61, 583, 427, 996, 324, 716, 189, 875, 47, 638, 267, 540, 812, 98, 453, 729, 174, 590, 335, 941, 126, 684, 256, 817, 369}
    };

    for (int i = 0; i < listas.size(); i++) {
        probarAlgoritmo(listas[i], i + 1);
    }

    return 0;
}