// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/02/2024
// Número de ejercicio: 15
// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
//valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
//junto con su cuadrado y su cubo

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre min y max
int generarAleatorio(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

int main() {
    // Generación de números aleatorios
    srand(time(nullptr));

    // Definir un vector de 10 enteros
    vector<int> numeros(10);

    // Inicializar el vector con valores aleatorios entre 1 y 10
    for (int i = 0; i < 10; ++i) 
    {
        numeros[i] = generarAleatorio(1, 10);
    }

    // Mostrar cada elemento del vector junto con su cuadrado y su cubo
    cout << "Elemento   Cuadrado   Cubo" << endl;
    for (int i = 0; i < 10; ++i) 
    {
        int cuadrado = numeros[i] * numeros[i];
        int cubo = numeros[i] * numeros[i] * numeros[i];
        cout << numeros[i] << "          " << cuadrado << "          " << cubo << endl;
    }

    return 0;
}