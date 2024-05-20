// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 17/05/2024
// Número de ejercicio: 9
// Problema planteado: Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23,
// 28, 38, 49,..., para n términos

#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para generar la secuencia
void generar_secuencia(vector<int>& secuencia, int n, int index = 0) {
    // Caso base: cuando hemos generado los n términos
    if (index == n) {
        return;
    }

    // Calcular el siguiente término de la secuencia
    if (index < 2) {
        secuencia.push_back(1); // Los primeros dos términos son 1
    } else {
        int nuevo_termino = 2 * secuencia[index - 1] + secuencia[index - 2];
        secuencia.push_back(nuevo_termino);
    }

    // Llamada recursiva para generar el siguiente término
    generar_secuencia(secuencia, n, index + 1);
}

int main() {
    int n;
    cout << "Ingrese el número de términos a generar: ";
    cin >> n;

    // Generar la secuencia
    vector<int> secuencia;
    generar_secuencia(secuencia, n);

    // Imprimir la secuencia generada
    cout << "La secuencia generada es: ";
    for (int i = 0; i < n; ++i) {
        cout << secuencia[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}