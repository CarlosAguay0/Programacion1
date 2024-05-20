// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función: son igualesdena

#include <iostream>

using namespace std;

// Función recursiva para calcular la suma de los cuadrados de los primeros n números enteros
int suma_cuadrados(int n) {
    // Caso base: cuando n es 1, el cuadrado de 1 es 1
    if (n == 1) {
        return 1;
    }

    // Llamada recursiva para calcular la suma de los cuadrados de los primeros n-1 números enteros
    // Luego, se agrega n^2 al resultado
    return suma_cuadrados(n - 1) + n * n;
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    // Calcular la suma de los cuadrados de los primeros n números enteros
    int resultado = suma_cuadrados(n);

    cout << "La suma de los cuadrados de los primeros " << n << " números enteros es: " << resultado << endl;

    return 0;
}