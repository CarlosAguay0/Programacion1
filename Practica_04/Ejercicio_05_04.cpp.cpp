// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 07/04/2024
// Número de ejercicio: 4
// Problema planteado: Ordenar por método Shell.
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

    // Ordenar el vector usando el método de shell
    for (int gap = tamano / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < tamano; ++i) {
            int temp = numeros[i];
            int j;
            for (j = i; j >= gap && numeros[j - gap] > temp; j -= gap) {
                numeros[j] = numeros[j - gap];
            }
            numeros[j] = temp;
        }
    }

    // Mostrar el vector ordenado
    cout << "Vector ordenado usando el método de shell:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}