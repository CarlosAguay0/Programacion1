// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 02/03/2024
// Número de ejercicio: 3
// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
//rango de A - B y determine cuántos de estos elementos son números primos.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre A y B
int numeroAleatorio(int A, int B) 
{
    return rand() % (B - A + 1) + A;
}

// Función para verificar si un número es primo
bool esPrimo(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    // Para la generación de números aleatorios
    srand(time(nullptr));

    // Rango de números aleatorios
    int A = 1;
    int B = 100;

    // Generar el arreglo de 50 posiciones con números aleatorios
    const int tamano_arreglo = 50;
    int arreglo[tamano_arreglo];
    for (int i = 0; i < tamano_arreglo; ++i) 
    {
        arreglo[i] = numeroAleatorio(A, B);
    }

    int numeros_primos = 0;

    // Verificar cuántos elementos del arreglo son números primos
    for (int i = 0; i < tamano_arreglo; ++i) 
    {
        if (esPrimo(arreglo[i])) {
            numeros_primos++;
        }
    }

    // Imprimir el resultado
    cout << "El número de elementos primos en el arreglo es: " << numeros_primos << endl;

    return 0;
}