// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 19
// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior ordene los elementos de menor a mayor

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// Función para generar un número aleatorio entre min y max
int generarAleatorio(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

int main() 
{
    // Generación de números aleatorios
    srand(time(nullptr));

    const int tamano = 10;
    vector<int> numeros(tamano);

    // Inicializar el vector con valores aleatorios
    for (int i = 0; i < tamano; ++i) 
    {
        numeros[i] = generarAleatorio(1, 100);
    }

    // Imprimir el vector original
    cout << "Vector original:" << endl;
    for (int numero : numeros) 
    {
        cout << numero << " ";
    }
    cout << endl;

    // Ordenar el vector de menor a mayor
    sort(numeros.begin(), numeros.end());

    // Imprimir el vector ordenado
    cout << "Vector ordenado de menor a mayor:" << endl;
    for (int numero : numeros) 
    {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}