#include <iostream>
using namespace std;

int main() {
    int diasTotales;
    cout << "Ingrese el numero de dias: ";
    cin >> diasTotales;

    int anos = 0, meses = 0, semanas = 0, dias = 0;
    int diasRestantes = diasTotales;

    // Calcular anos
    while (diasRestantes >= 365) {
        anos++;
        diasRestantes -= 365;
    }

    // Calcular meses
    while (diasRestantes >= 30) {
        meses++;
        diasRestantes -= 30;
    }

    // Calcular semanas
    while (diasRestantes >= 7) {
        semanas++;
        diasRestantes -= 7;
    }

    // Los dias restantes son los dias
    dias = diasRestantes;

    cout << "Anos: " << anos <<endl;
    cout << "Meses: " << meses <<endl;
    cout << "Semanas: " << semanas <<endl;
    cout << "Dias: " << dias <<endl;

    return 0;
}
