#include <iostream>
#include <string>
using namespace std;

string decimalABinario(int numero) {
    if (numero == 0) return "0";
    string binario = "";
    while (numero > 0) {
        binario = (char)(numero % 2 + '0') + binario; // Convertimos el resto a carácter y concatenamos
        numero /= 2;
    }
    return binario;
}

int main() {
    int num;
    cout << "Ingrese un numero decimal: ";
    cin >> num;
    if (num < 0) {
        cout << "El numero debe ser positivo." << endl;
    } else {
        cout << "En binario: " << decimalABinario(num) << endl;
    }
    return 0; // Asegúrate de incluir return 0 al final de main
}
