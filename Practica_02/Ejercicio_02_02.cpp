// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 02/03/2024
// Número de ejercicio: 2
// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos

#include <iostream>

using namespace std;

// Función para calcular el porcentaje de números pares positivos e impares negativos
void calcularPorcentaje(const int arreglo[], double& porcentaje_pares_positivos, double& porcentaje_impares_negativos) {
    int pares_positivos = 0;
    int impares_negativos = 0;

    for (int i = 0; i < 10; ++i) 
    {
        if (arreglo[i] % 2 == 0 && arreglo[i] > 0) 
        {
            pares_positivos++;
        } else if (arreglo[i] % 2 != 0 && arreglo[i] < 0) 
        {
            impares_negativos++;
        }
    }

    porcentaje_pares_positivos = (static_cast<double>(pares_positivos) / 10) * 100;
    porcentaje_impares_negativos = (static_cast<double>(impares_negativos) / 10) * 100;
}

int main() 
{
    const int arreglo[10] = {2, -3, 4, -5, 6, -7, 8, -9, 10, -11};
    double porcentaje_pares_positivos;
    double porcentaje_impares_negativos;

    calcularPorcentaje(arreglo, porcentaje_pares_positivos, porcentaje_impares_negativos);

    cout << "Porcentaje de números pares positivos: " << porcentaje_pares_positivos << "%" << endl;
    cout << "Porcentaje de números impares negativos: " << porcentaje_impares_negativos << "%" << endl;

    return 0;
}