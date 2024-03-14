// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 10/03/2024
// Número de ejercicio: 3
// Problema planteado: Escribe un programa que se encargue de comprobar si un número 
// es o no primo. Hecho esto, imprime los números primos entre 1 y 100.

#include <iostream>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) 
{
    if (numero <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i)
    {
        if (numero % i == 0) 
        {
            return false;
        }
    }
    return true;
}

// Función para imprimir los números primos entre 1 y 100
void imprimirNumerosPrimos() 
{
    cout << "Números primos entre 1 y 100:" << endl;
    for (int i = 1; i <= 100; ++i) 
    {
        if (esPrimo(i)) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() 
{
    imprimirNumerosPrimos();
    return 0;
}