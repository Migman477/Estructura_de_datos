#include <iostream>

// Función recursiva para calcular el n-ésimo número de Fibonacci
long long fibonacci(int n) {
    // Casos base
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Caso recursivo
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int limite;

    std::cout << "Introduce el limite para la secuencia de Fibonacci: ";
    if (!(std::cin >> limite) || limite < 0) {
        std::cout << "Entrada no valida. Debe ser un numero entero no negativo.\n";
        return 1;
    }

    std::cout << "\n";
    for (int i = 0; i <= limite; ++i) {
        std::cout << "Fibonacci(" << i << ") = " << fibonacci(i) << "\n";
    }

    return 0;
}