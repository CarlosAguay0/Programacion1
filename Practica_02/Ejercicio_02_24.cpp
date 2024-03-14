// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 06/03/2024
// Número de ejercicio: 24
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string cadena;

    // Leer la cadena en mayúsculas
    cout << "Ingrese una cadena en mayúsculas: ";
    getline(cin, cadena);

    // Convertir la cadena a minúsculas
    for (char &caracter : cadena) 
    {
        // Verificar si el carácter es mayúscula
        if (caracter >= 'A' && caracter <= 'Z') 
        {
            // Convertir a minúscula restando la diferencia entre 'A' y 'a'
            caracter = caracter - 'A' + 'a';
        }
    }

    // Mostrar la cadena en minúsculas
    cout << "La cadena en minúsculas es: " << cadena << endl;

    return 0;
}