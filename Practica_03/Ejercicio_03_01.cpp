// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 10/03/2024
// Número de ejercicio: 2
// Problema planteado: Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Bool) según sean o no anagramas.
//- Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
//- NO hace falta comprobar que ambas palabras existan.
//- Dos palabras exactamente iguales no son anagrama.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Función para ordenar las letras de una palabra
string ordenarPalabra(const string& palabra) {
    string palabraOrdenada = palabra;
    sort(palabraOrdenada.begin(), palabraOrdenada.end());
    return palabraOrdenada;
}

// Función para verificar si dos palabras son anagramas
bool sonAnagramas(const string& palabra1, const string& palabra2) {
    // Verificar si las palabras tienen la misma longitud
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // Ordenar las letras de ambas palabras
    string palabraOrdenada1 = ordenarPalabra(palabra1);
    string palabraOrdenada2 = ordenarPalabra(palabra2);

    // Verificar si las palabras ordenadas son iguales
    return palabraOrdenada1 == palabraOrdenada2;
}

int main() {
    string palabra1, palabra2;
    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

    if (sonAnagramas(palabra1, palabra2)) {
        cout << "Las palabras son anagramas." << endl;
    } else {
        cout << "Las palabras no son anagramas." << endl;
    }

    return 0;
}