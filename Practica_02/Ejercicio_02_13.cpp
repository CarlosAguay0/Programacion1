// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/02/2024
// Número de ejercicio: 11
// Problema planteado:Almacenar en un arreglo los n primeros números primos

#include <iostream>
#include <vector>

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
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para almacenar los primeros n números primos en un vector
vector<int> primerosNPrimos(int n) 
{
    vector<int> primos;
    int numero = 2; // Empezamos desde el primer número primo

    while (primos.size() < n) 
    {
        if (esPrimo(numero)) 
        {
            primos.push_back(numero);
        }
        numero++;
    }

    return primos;
}

int main() 
{
    int n;
    cout << "Ingrese la cantidad de primeros números primos que desea almacenar: ";
    cin >> n;

    vector<int> primeros_primos = primerosNPrimos(n);

    cout << "Los primeros " << n << " números primos son:" << endl;
    for (int primo : primeros_primos) 
    {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}