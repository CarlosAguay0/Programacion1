// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena
#include <iostream>
#include <string>

using namespace std;

// Función recursiva para escribir al revés una cadena
void escribir_al_reves(const string& cadena, int index) {
    // Caso base: cuando llegamos al final de la cadena
    if (index < 0) {
        return;
    }

    // Imprimir el carácter actual
    cout << cadena[index];

    // Llamada recursiva para el siguiente carácter
    escribir_al_reves(cadena, index - 1);
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "La cadena al revés es: ";
    escribir_al_reves(cadena, cadena.size() - 1);
    cout << endl;

    return 0;
}