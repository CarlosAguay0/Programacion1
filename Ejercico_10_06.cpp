// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 18/05/2024
// Número de ejercicio: 10
// Problema planteado: . Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos números enteros, a partir de la relación:


#include <iostream>

using namespace std;

// Función recursiva para calcular el factorial de un número
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Función recursiva para calcular el coeficiente binomial
unsigned long long coeficiente_binomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de k: ";
    cin >> k;

    if (k < 0 || k > n) {
        cout << "Error: k debe ser un número entero no negativo y no mayor que n." << endl;
        return 1;
    }

    unsigned long long coeficiente = coeficiente_binomial(n, k);
    cout << "El coeficiente binomial de " << n << " sobre " << k << " es: " << coeficiente << endl;

    return 0;
}