// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 3
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos
#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para calcular la suma de los elementos del vector
int suma_vector(const vector<int>& vec, int index = 0) {
    // Caso base: si hemos llegado al final del vector
    if (index == vec.size()) {
        return 0;
    }

    // Sumamos el elemento actual con la suma de los restantes
    return vec[index] + suma_vector(vec, index + 1);
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5}; // Puedes modificar este vector según tus necesidades

    // Calcular la suma de los elementos del vector
    int suma = suma_vector(numeros);

    cout << "La suma de los elementos del vector es: " << suma << endl;

    return 0;
}