// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 22
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;

    // Declarar vectores
    vector<int> vector1(n);
    vector<int> vector2(n);
    vector<int> vectorMultiplicacion(n);

    // Leer valores para el vector1
    cout << "Ingrese los valores para el primer vector:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Leer valores para el vector2
    cout << "Ingrese los valores para el segundo vector:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la multiplicación de los vectores
    for (int i = 0; i < n; ++i) 
    {
        vectorMultiplicacion[i] = vector1[i] * vector2[i];
    }

    // Imprimir el vector resultado
    cout << "La multiplicación de los vectores es:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << vectorMultiplicacion[i] << " ";
    }
    cout << endl;

    return 0;
}