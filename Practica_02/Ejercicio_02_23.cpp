// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 06/03/2024
// Número de ejercicio: 23
// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> N;

    // Declarar vectores
    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> vectorCombinado(2 * N);

    // Leer valores para el vector1
    cout << "Ingrese los valores para el primer vector:" << endl;
    for (int i = 0; i < N; ++i) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Leer valores para el vector2
    cout << "Ingrese los valores para el segundo vector:" << endl;
    for (int i = 0; i < N; ++i) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Combinar los vectores
    for (int i = 0; i < N; ++i) 
    {
        vectorCombinado[2 * i] = vector1[i];
        vectorCombinado[2 * i + 1] = vector2[i];
    }

    // Imprimir el vector combinado
    cout << "El vector combinado es:" << endl;
    for (int i = 0; i < 2 * N; ++i) 
    {
        cout << vectorCombinado[i] << " ";
    }
    cout << endl;

    return 0;
}