// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 21
// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) 
// y el nombre del mes. Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    const int tamaño = 5;
    vector<int> vector1(tamaño);
    vector<int> vector2(tamaño);
    vector<int> vector3(tamaño);

    // Leer valores para vector1
    cout << "Ingrese valores para el vector1:" << endl;
    for (int i = 0; i < tamaño; ++i) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Leer valores para vector2
    cout << "Ingrese valores para el vector2:" << endl;
    for (int i = 0; i < tamaño; ++i) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular vector3 = vector1 + vector2
    for (int i = 0; i < tamaño; ++i) 
    {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Imprimir el vector3
    cout << "El vector3 (vector1 + vector2) es:" << endl;
    for (int i = 0; i < tamaño; ++i) 
    {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}