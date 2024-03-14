// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 03/03/2024
// Número de ejercicio: 5
// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre A y B
int numeroAleatorio(int A, int B) 
{
    return rand() % (B - A + 1) + A;
}

int main() 
{
    // Generación de números aleatorios
    srand(time(nullptr));

    // Tamaño del arreglo de estaturas
    int N = 100; // Cambiar según la cantidad de personas

    // Rango de estaturas
    int estatura_minima = 50;
    int estatura_maxima = 240;

    // Generar el arreglo de estaturas aleatorias
    int estaturas[N];
    for (int i = 0; i < N; ++i) 
    {
        estaturas[i] = numeroAleatorio(estatura_minima, estatura_maxima);
    }

    // Calcular la estatura más baja y la mayor estatura
    int estatura_min = estaturas[0];
    int estatura_max = estaturas[0];
    double suma_estaturas = estaturas[0];
    for (int i = 1; i < N; ++i) 
    {
        if (estaturas[i] < estatura_min) 
        {
            estatura_min = estaturas[i];
        }
        if (estaturas[i] > estatura_max) 
        {
            estatura_max = estaturas[i];
        }
        suma_estaturas += estaturas[i];
    }

    // Calcular el promedio de estaturas
    double promedio_estaturas = suma_estaturas / N;

    cout << "Estatura más baja: " << estatura_min << " cm" << endl;
    cout << "Estatura más alta: " << estatura_max << " cm" << endl;
    cout << "Promedio de estaturas: " << promedio_estaturas << " cm" << endl;

    return 0;
}