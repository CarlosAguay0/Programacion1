// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 07/04/2024
// Número de ejercicio: 6
// Problema planteado: Ordenar por método Quicksort.
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

// Función para elegir el pivote y particionar el vector
int partition(std::vector<int>& array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (array[j] < pivot) {
            ++i;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}

// Función para realizar Quicksort recursivamente
void quicksort(std::vector<int>& array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
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

    // Ordenar el vector usando Quicksort
    quicksort(numeros, 0, tamano - 1);

    // Mostrar el vector ordenado
    cout << "Vector ordenado usando el método de Quicksort:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}