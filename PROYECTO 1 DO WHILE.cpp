#include <iostream>
using namespace std;
int main() {
    int diasTotales;
    cout << "Ingrese el numero de dias: ";
    cin >> diasTotales;

    int anos = 0, meses = 0, semanas = 0, dias = 0;
    int diasRestantes = diasTotales;

    // Calcular anos
    do {
        if (diasRestantes < 365) break;
        anos++;
        diasRestantes -= 365;
    } while (diasRestantes >= 365);

    // Calcular meses
    do {
        if (diasRestantes < 30) break;
        meses++;
        diasRestantes -= 30;
    } while (diasRestantes >= 30);

    // Calcular semanas
    do {
        if (diasRestantes < 7) break;
        semanas++;
        diasRestantes -= 7;
    } while (diasRestantes >= 7);

    // Los dias restantes son los dias
    dias = diasRestantes;

    cout << "Anos: " << anos <<endl;
    cout << "Meses: " << meses <<endl;
    cout << "Semanas: " << semanas <<endl;
    cout << "Dias: " << dias <<endl;

}
