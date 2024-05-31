// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 24/05/2024
// Número de ejercicio: 6
// Problema planteado: Crear un programa donde se introduzca un número para luego convertirlo en base 6,8, 10
#include <iostream>
#include <cmath>

using namespace std;

// Función para convertir un número a base 6
string convertirBase6(int numero) {
    string resultado = "";
    while (numero > 0) {
        resultado = to_string(numero % 6) + resultado;
        numero /= 6;
    }
    return resultado;
}

// Función para convertir un número a base 8
string convertirBase8(int numero) {
    string resultado = "";
    while (numero > 0) {
        resultado = to_string(numero % 8) + resultado;
        numero /= 8;
    }
    return resultado;
}

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Convertir el número a base 6
    string base6 = convertirBase6(numero);
    cout << "El numero " << numero << " en base 6 es: " << base6 << endl;

    // Convertir el número a base 8
    string base8 = convertirBase8(numero);
    cout << "El numero " << numero << " en base 8 es: " << base8 << endl;

    // El número en base 10 no necesita conversión
    cout << "El numero " << numero << " en base 10 es: " << numero << endl;

    return 0;
}