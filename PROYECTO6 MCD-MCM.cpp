#include <iostream>
using namespace std;

int mcd(int a, int b) {
    if (a < 0) a = -a; // Convertir a valores absolutos
    if (b < 0) b = -b;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a; // Cuando a == b, es el MCD
}

int mcm(int a, int b) {
    if (a == 0 || b == 0) return 0; // Caso especial
    int divisor = mcd(a, b);
    return (a / divisor) * b; // Dividir primero para reducir el riesgo de overflow
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    cout << "MCD: " << mcd(num1, num2) << endl;
    cout << "MCM: " << mcm(num1, num2) << endl;

    return 0; // Asegurar que return 0 esté bien formateado
}
