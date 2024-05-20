// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 18/05/2024
// Número de ejercicio: 9
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
// entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
// de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
// • Empiece con cualquier entero positivo.
// • Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
// • Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendrá el número 1, independientemente del entero inicial. Por
// ejemplo, cuando el entero inicial es 26, la secuencia será:
// 26 13 40 20 10 5 16 8 4 2 1

#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para imprimir la secuencia de la conjetura de Ullman para un número dado
void conjetura_ullman(int n) {
    // Imprime el número actual
    cout << n << " ";

    // Caso base: cuando llegamos al número 1
    if (n == 1) {
        return;
    }

    // Si el número es par, divídelo entre 2; si es impar, multiplícalo por 3 y suma 1
    if (n % 2 == 0) {
        conjetura_ullman(n / 2);
    } else {
        conjetura_ullman(n * 3 + 1);
    }
}

int main() {
    int n;
    cout << "Ingrese un número entero mayor que 1: ";
    cin >> n;

    // Verifica que el número ingresado sea válido
    if (n <= 1) {
        cout << "El número ingresado no es válido. Debe ser mayor que 1." << endl;
        return 1;
    }

    // Imprime la secuencia de la conjetura de Ullman para el número dado
    cout << "La secuencia de la conjetura de Ullman para " << n << " es: ";
    conjetura_ullman(n);
    cout << endl;

    return 0;
}