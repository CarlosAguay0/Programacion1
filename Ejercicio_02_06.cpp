// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 2
// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
// 49,..., para n términos.
#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para generar la secuencia
void generar_secuencia(vector<int>& secuencia, int n, int index = 0) {
    // Caso base: cuando hemos generado los n términos
    if (index == n) {
        return;
    }

    // La secuencia sigue el patrón dado
    if (index == 0 || index == 1) {
        secuencia.push_back(1);
    } else if (index == 2) {
        secuencia.push_back(2);
    } else if (index == 3) {
        secuencia.push_back(4);
    } else {
        secuencia.push_back(secuencia[index - 1] + secuencia[index - 3] + secuencia[index - 4]);
    }

    // Llamada recursiva para generar el siguiente término
    generar_secuencia(secuencia, n, index + 1);
}

int main() {
    int n;
    cout << "Ingrese la cantidad de términos a generar: ";
    cin >> n;

    vector<int> secuencia;
    generar_secuencia(secuencia, n);

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