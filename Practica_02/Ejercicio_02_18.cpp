// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 18
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo 
// hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    const int tamaño = 10;
    vector<int> vectorEnteros(tamaño);
    int contador = 0;

    // Leer números para rellenar el vector o se introduzca un número negativo
    while (contador < tamaño) 
    {
        int numero;
        cout << "Ingrese un número (o un número negativo para terminar): ";
        cin >> numero;

        // Si se introduce un número negativo, terminar la lectura
        if (numero < 0) 
        {
            break;
        }

        // Almacenar el número en el vector
        vectorEnteros[contador] = numero;
        contador++;
    }

    // Imprimir el vector con solo los elementos introducidos
    cout << "Vector :" << endl;
    for (int i = 0; i < contador; ++i) 
    {
        cout << vectorEnteros[i] << " ";
    }
    cout << endl;

    return 0;
}