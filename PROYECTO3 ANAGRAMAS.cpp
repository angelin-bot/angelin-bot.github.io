#include <iostream>
#include <algorithm>
#include <string>

bool sonAnagramas(const std::string& palabra1, const std::string& palabra2) {
    if (palabra1 == palabra2) return false; // No son anagramas si son iguales

    std::string p1 = palabra1;
    std::string p2 = palabra2;

    std::sort(p1.begin(), p1.end());
    std::sort(p2.begin(), p2.end());

    return p1 == p2;
}

int main() {
    std::string str1, str2;
    std::cout << "Ingrese la primera palabra: ";
    std::cin >> str1;
    std::cout << "Ingrese la segunda palabra: ";
    std::cin >> str2;

    if (sonAnagramas(str1, str2)) {
        std::cout << "Verdadero: Son anagramas." << std::endl;
    } else {
        std::cout << "Falso: No son anagramas." << std::endl;
    }

}
