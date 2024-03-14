// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 06/03/2024
// Número de ejercicio: 25
// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e 
// indique el mayor elemento, el menor elemento y el promedio..

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    // Generación de números aleatorios
    srand(time(nullptr));

    // Declarar el vector de tamaño n
    vector<int> elementos(n);

    // Llenar el vector con valores aleatorios entre 1 y 100
    for (int i = 0; i < n; ++i) {
        elementos[i] = rand() % 100 + 1;
    }

    // Encontrar el mayor y el menor elemento
    int mayor = elementos[0];
    int menor = elementos[0];
    double suma = 0;
    for (int i = 0; i < n; ++i) {
        if (elementos[i] > mayor) {
            mayor = elementos[i];
        }
        if (elementos[i] < menor) {
            menor = elementos[i];
        }
        suma += elementos[i];
    }

    // Calcular el promedio
    double promedio = suma / n;

    // Mostrar los resultados
    cout << "El mayor elemento del vector es: " << mayor << endl;
    cout << "El menor elemento del vector es: " << menor << endl;
    cout << "El promedio de los elementos del vector es: " << promedio << endl;

    return 0;
}