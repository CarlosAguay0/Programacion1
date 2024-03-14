// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/02/2024
// Número de ejercicio: 14
// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga los números capicúa contenidos en el primero.

#include <iostream>
#include <vector>

using namespace std;

// Función para verificar si un número es capicúa
bool esCapicua(int numero) 
{
    int original = numero;
    int invertido = 0;
    while (numero > 0) 
    {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    return original == invertido;
}

// Función para generar un arreglo con números aleatorios entre N y M
vector<int> generarArreglo(int N, int M, int tamano) 
{
    vector<int> arreglo;
    for (int i = 0; i < tamano; ++i) 
    {
        int numero = rand() % (M - N + 1) + N;
        arreglo.push_back(numero);
    }
    return arreglo;
}

// Función para filtrar los números capicúa de un arreglo
vector<int> numerosCapicua(const vector<int>& arreglo) 
{
    vector<int> capicua;
    for (int numero : arreglo) 
    {
        if (esCapicua(numero)) 
        {
            capicua.push_back(numero);
        }
    }
    return capicua;
}

int main() 
{
    // Generación de números aleatorios
    srand(time(nullptr));

    // Rango de números aleatorios
    int N = 100; // límite inferior
    int M = 9999; // límite superior

    int tamano_arreglo = 15;

    // Generar el arreglo de números aleatorios
    vector<int> arreglo = generarArreglo(N, M, tamano_arreglo);

    // Filtrar los números capicúa
    vector<int> capicua = numerosCapicua(arreglo);

    cout << "Arreglo original:" << endl;
    for (int numero : arreglo) 
    {
        cout << numero << " ";
    }
    cout << endl;

    
    cout << "Números capicúa encontrados:" << endl;
    for (int capicua : capicua) 
    {
        cout << capicua << " ";
    }
    cout << endl;

    return 0;
}