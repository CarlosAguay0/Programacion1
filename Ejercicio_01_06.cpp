// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
// números enteros aplicando el algoritmo de Euclides
#include <iostream>

using namespace std;

// Función recursiva para calcular el máximo común divisor (MCD) usando el algoritmo de Euclides
int mcd_euclides(int a, int b) {
    // Caso base: si b es cero, entonces el MCD es a
    if (b == 0) {
        return a;
    }
    // Llamada recursiva con b y el resto de la división a % b
    return mcd_euclides(b, a % b);
}

int main() {
    int num1, num2;
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Calcular el MCD de num1 y num2
    int mcd = mcd_euclides(num1, num2);

    cout << "El máximo común divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}