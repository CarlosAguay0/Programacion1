// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 17
// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno (comprendidas entre 0 y 100). 
// A continuación, debe mostrar todas las notas, la nota media, la nota más alta que ha sacado y la menor

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    const int numNotas = 5;
    vector<int> notas(numNotas);

    cout << "Ingrese las 5 notas obtenidas por el alumno (entre 0 y 100):" << endl;
    for (int i = 0; i < numNotas; ++i) 
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
        // Verificar que la nota esté en el rango válido
        while (notas[i] < 0 || notas[i] > 100) 
        {
            cout << "Nota no válida. Ingrese una nota entre 0 y 100: ";
            cin >> notas[i];
        }
    }

    // Mostrar todas las notas
    cout << "Notas obtenidas por el alumno: ";
    for (int nota : notas) 
    {
        cout << nota << " ";
    }
    cout << endl;

    // Calcular la nota media
    int sumaNotas = 0;
    for (int nota : notas) 
    {
        sumaNotas += nota;
    }
    double notaMedia = static_cast<double>(sumaNotas) / numNotas;

    // Encontrar la nota más alta y la menor
    int notaMaxima = *max_element(notas.begin(), notas.end());
    int notaMinima = *min_element(notas.begin(), notas.end());

    // Mostrar la nota media, la más alta y la menor
    cout << "Nota media: " << notaMedia << endl;
    cout << "Nota más alta: " << notaMaxima << endl;
    cout << "Nota más baja: " << notaMinima << endl;

    return 0;
}