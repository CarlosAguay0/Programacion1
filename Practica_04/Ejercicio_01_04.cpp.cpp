// Materia: Programación I, Paralelo 1
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 06/04/2024
// Número de ejercicio: 1
// Problema planteado: Ingresar dos números enteros y hallar al mcd mediante el Algoritmo de Euclides.
#include <iostream>

int main() {
    using namespace std;

    int num1, num2;

    // Ingresar los dos números enteros
    cout << "Ingrese el primer número entero: ";
    cin >> num1;

    cout << "Ingrese el segundo número entero: ";
    cin >> num2;

    // Algoritmo de Euclides para encontrar el MCD
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // El MCD es el último valor no nulo de num1
    cout << "El MCD de los números ingresados es: " << num1 << endl;

    return 0;
}