// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 06/04/2024
// Número de ejercicio: 2
// Problema planteado: Ordenar por selección.
#include <iostream>
#include <vector>
#include <cstdlib> // Para la generación de números aleatorios
#include <ctime>   // Para obtener una semilla aleatoria

// Función para intercambiar dos elementos en un vector
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    using namespace std;

    // Semilla para la generación de números aleatorios
    srand(time(nullptr));

    int tamano;
    cout << "Ingrese el tamaño del vector (más de 5 elementos): ";
    cin >> tamano;

    if (tamano <= 5) {
        cout << "El tamaño del vector debe ser mayor que 5." << endl;
        return 1;
    }

    // Crear un vector de tamaño "tamano"
    vector<int> numeros(tamano);

    // Llenar el vector con números aleatorios entre 1 y 1000
    for (int i = 0; i < tamano; ++i) {
        numeros[i] = rand() % 1000 + 1;
    }

    // Mostrar el vector original
    cout << "Vector original:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Ordenar el vector usando el método de selección
    for (int i = 0; i < tamano - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < tamano; ++j) {
            if (numeros[j] < numeros[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(numeros[i], numeros[min_index]);
        }
    }

    // Mostrar el vector ordenado
    cout << "Vector ordenado usando el método de selección:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}