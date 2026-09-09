#include <iostream>
using namespace std;

int main() {
    int n;
    long a = 0, b = 1, c;

    cout << "Escribe el numero de elementos: ";
    cin >> n;

    cout << "Serie de Fibonacci: ";
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }

    return 0;
}
