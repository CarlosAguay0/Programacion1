// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 11/03/2024
// Número de ejercicio: 7
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>

using namespace std;

int main() 
{
    int año;

    // Solicitar al usuario que ingrese un año
    cout << "Ingrese un año: ";
    cin >> año;

    // Verificar si el año es bisiesto
    bool esBisiesto = false;
    if (año % 4 == 0) 
    {
        if (año % 100 == 0) 
        {
            if (año % 400 == 0) 
            {
                esBisiesto = true;
            }
        } 
        else 
        {
            esBisiesto = true;
        }
    }

    // Mostrar el resultado
    if (esBisiesto) 
    {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " no es un año bisiesto." << endl;
    }

    return 0;
}