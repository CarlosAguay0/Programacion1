// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 03/03/2024
// Número de ejercicio: 6
// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.

#include <iostream>

using namespace std;

// Función para intercalar los elementos de dos arreglos
void intercalarArreglos(const int arreglo1[], const int arreglo2[], int tamano, int resultado[]) 
{
    int indice_resultado = 0;
    for (int i = 0; i < tamano; ++i) 
    {
        resultado[indice_resultado++] = arreglo1[i];
        resultado[indice_resultado++] = arreglo2[i];
    }
}

// Función para imprimir un arreglo
void imprimirArreglo(const int arreglo[], int tamano)
{
    cout << "[";
    for (int i = 0; i < tamano; ++i) 
    {
        cout << arreglo[i];
        if (i < tamano - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    // Arreglos constantes de igual tamaño
    const int tamano = 5;
    const int arreglo1[tamano] = {1, 2, 3, 4, 5};
    const int arreglo2[tamano] = {6, 7, 8, 9, 10};

    // Arreglo resultado
    int resultado[tamano * 2]; // El tamaño será el doble de los arreglos originales

    // Intercalar los elementos de los arreglos
    intercalarArreglos(arreglo1, arreglo2, tamano, resultado);

    cout << "Arreglo resultado 22 intercalado: " <<endl;
    imprimirArreglo(resultado, tamano * 2);

    return 0;
}