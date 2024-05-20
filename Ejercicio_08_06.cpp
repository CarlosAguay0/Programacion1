// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 17/05/2024
// Número de ejercicio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
// simétrica

#include <iostream>
#include <string>

using namespace std;

// Función recursiva para verificar si una cadena es simétrica
bool es_simetrica(const string& cadena, int inicio, int fin) {
    // Caso base: cuando el índice de inicio supera al índice de fin
    if (inicio >= fin) {
        return true;
    }

    // Si los caracteres en los extremos son iguales, se continúa verificando
    if (cadena[inicio] == cadena[fin]) {
        // Llamada recursiva para verificar los caracteres internos
        return es_simetrica(cadena, inicio + 1, fin - 1);
    }

    // Si los caracteres en los extremos no son iguales, la cadena no es simétrica
    return false;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    // Verificar si la cadena es simétrica
    if (es_simetrica(cadena, 0, cadena.size() - 1)) {
        cout << "La cadena es simétrica." << endl;
    } else {
        cout << "La cadena no es simétrica." << endl;
    }

    return 0;
}