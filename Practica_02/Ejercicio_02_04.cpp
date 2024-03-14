// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 02/03/2024
// Número de ejercicio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
//el porcentaje de mayores (>=18 años) y menores de edad (<18 años).

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre A y B
int numeroAleatorio(int A, int B) 
{
    return rand() % (B - A + 1) + A;
}

int main() {
    // Semilla para la generación de números aleatorios
    srand(time(nullptr));

    // Rango de edades
    int edad_minima = 1;
    int edad_maxima = 100;

    // Generar el arreglo de 50 edades aleatorias
    const int tamano_arreglo = 50;
    int edades[tamano_arreglo];
    for (int i = 0; i < tamano_arreglo; ++i) 
    {
        edades[i] = numeroAleatorio(edad_minima, edad_maxima);
    }

    // Contadores para personas mayores y menores de edad
    int mayores = 0;
    int menores = 0;

    // Contar cuántas personas son mayores o menores de edad
    for (int i = 0; i < tamano_arreglo; ++i) 
    {
        if (edades[i] >= 18) 
        {
            mayores++;
        } 
        else 
        {
            menores++;
        }
    }

    // Calcular el porcentaje de mayores y menores de edad
    double porcentaje_mayores = (static_cast<double>(mayores) / tamano_arreglo) * 100;
    double porcentaje_menores = (static_cast<double>(menores) / tamano_arreglo) * 100;

    // Imprimir resultados
    cout << "Porcentaje de personas mayores de edad: " << porcentaje_mayores << "%" << endl;
    cout << "Porcentaje de personas menores de edad: " << porcentaje_menores << "%" << endl;

    return 0;
}