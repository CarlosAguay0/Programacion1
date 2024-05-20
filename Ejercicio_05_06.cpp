// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son igualesdena

#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para comparar dos vectores
bool comparar_vectores(const vector<int>& vec1, const vector<int>& vec2, int index = 0) {
    // Caso base: cuando hemos recorrido ambos vectores completamente
    if (index == vec1.size() && index == vec2.size()) {
        return true;
    }

    // Verificar si los elementos en la posición actual son iguales
    if (index < vec1.size() && index < vec2.size() && vec1[index] == vec2[index]) {
        // Llamada recursiva para comparar los siguientes elementos
        return comparar_vectores(vec1, vec2, index + 1);
    }

    // Si alguna de las condiciones no se cumple, los vectores no son iguales
    return false;
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5}; // Cambia este vector para probar diferentes casos

    // Verificar si los vectores son iguales
    if (comparar_vectores(vec1, vec2)) {
        cout << "Los vectores son iguales." << endl;
    } else {
        cout << "Los vectores no son iguales." << endl;
    }

    return 0;
}