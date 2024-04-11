// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 06/04/2024
// Número de ejercicio: 3
// Problema planteado: Ordenar por inserción.
#include <iostream>
#include <vector>
#include <cstdlib> // Para la generación de números aleatorios
#include <ctime>   // Para obtener una semilla aleatoria

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

    // Ordenar el vector usando el método de inserción
    for (int i = 1; i < tamano; ++i) {
        int key = numeros[i];
        int j = i - 1;
        while (j >= 0 && numeros[j] > key) {
            numeros[j + 1] = numeros[j];
            j = j - 1;
        }
        numeros[j + 1] = key;
    }

    // Mostrar el vector ordenado
    cout << "Vector ordenado usando el método de inserción:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}