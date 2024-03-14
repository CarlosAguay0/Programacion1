// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 17
// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
// leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y
// muéstralo por la pantalla.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    const int tamano = 5;
    vector<string> vectorOriginal(tamano);

    // Leer datos para el vector original desde el teclado
    cout << "Ingrese " << tamano << " cadenas de caracteres:" << endl;
    for (int i = 0; i < tamano; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vectorOriginal[i];
    }

    // Copiar los elementos del vector original en otro vector en orden inverso
    vector<string> vectorInverso(tamano);
    for (int i = 0; i < tamano; ++i) 
    {
        vectorInverso[i] = vectorOriginal[tamano - i - 1];
    }

    // Mostrar el vector en orden inverso
    cout << "Vector en orden inverso:" << endl;
    for (int i = 0; i < tamano; ++i) 
    {
        cout << vectorInverso[i] << " ";
    }
    cout << endl;

    return 0;
}