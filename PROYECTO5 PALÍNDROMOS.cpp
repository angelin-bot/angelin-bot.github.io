#include <iostream>
#include <string>
#include <cctype> // Para tolower e isalnum
#include <algorithm> // Para reverse
using namespace std;

bool esPalindromo(const string& texto) {
    string limpio = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (isalnum(c)) { // Solo alphanumericos
            char lower = tolower(c);
            // Manejo simple de tildes (para español básico)
            if (lower == 'á') lower = 'a';
            else if (lower == 'é') lower = 'e';
            else if (lower == 'í') lower = 'i';
            else if (lower == 'ó') lower = 'o';
            else if (lower == 'ú') lower = 'u';
            limpio += lower;
        }
    }

    string reverso = limpio;
    reverse(reverso.begin(), reverso.end());

    return limpio == reverso;
}

int main() {
    string txt;
    cout << "Ingrese el texto: ";
    getline(cin, txt); // Para leer con espacios

    if (esPalindromo(txt)) {
        cout << "Verdadero: Es un palindromo." << endl;
    } else {
        cout << "Falso: No es un palindromo." << endl;
    }

    return 0; // Asegúrate de incluir return 0 al final de main
}
