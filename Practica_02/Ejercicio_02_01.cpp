// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 02/03/2024
// Número de ejercicio: 1
// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
// los componentes de índice par y la resta de los componentes de índice impar.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
// Función para generar un número aleatorio entre A y B
int numeroAleatorio(int A, int B) 
{
    return rand() % (B - A + 1) + A;
}

// Función para generar el vector de tamaño N con números aleatorios entre A y B
vector<int> generarVector(int N, int A, int B) 
{
    vector<int> vector;
    for (int i = 0; i < N; ++i) 
    {
        vector.push_back(numeroAleatorio(A, B));
    }
    return vector;
}

// Función para calcular la suma de los componentes de índice par del vector
int sumaComponentesPares(const vector<int>& vector) 
{
    int suma = 0;
    for (int i = 0; i < vector.size(); i += 2) {
        suma += vector[i];
    }
    return suma;
}

// Función para calcular la resta de los componentes de índice impar del vector
int restaComponentesImpares(const vector<int>& vector) 
{
    int resta = 0;
    for (int i = 1; i < vector.size(); i += 2) 
    {
        resta -= vector[i];
    }
    return resta;
}

int main() {
    // Semilla para la generación de números aleatorios
    srand(time(nullptr));

    // Tamaño del vector
    int N = 10;
    // Rango de números aleatorios
    int A = 1;
    int B = 100;

    // Generar el vector
    vector<int> vector = generarVector(N, A, B);

    // Imprimir el vector generado
    cout << "Vector generado: ";
    for (int i = 0; i < N; ++i) 
    {
        cout << vector[i] << " ";
    }
    cout << std::endl;

    // Calcular y mostrar la suma de los componentes de índice par
    int suma_pares = sumaComponentesPares(vector);
    cout << "Suma de componentes de índice par: " << suma_pares << endl;

    // Calcular y mostrar la resta de los componentes de índice impar
    int resta_impares = restaComponentesImpares(vector);
    cout << "Resta de componentes de índice impar: " << resta_impares << endl;

    return 0;
}