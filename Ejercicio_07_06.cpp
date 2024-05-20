// Materia: Programación I, Paralelo 4
// Autor:Carlos Aguayo Perez
// Fecha creación: 16/05/2024
// Número de ejercicio: 6
// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
// comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
// conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
// más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
// venta el granjero al cabo de un año?
// n: son igualesdena

#include <iostream>

using namespace std;

// Función recursiva para calcular el número de parejas de conejos después de n meses
int calcular_parejas_conejos(int meses) {
    // Caso base: cuando han pasado menos de 2 meses, solo hay una pareja de conejos
    if (meses <= 2) {
        return 1;
    }
    // Llamada recursiva para calcular el número de parejas de conejos después de (meses - 1) meses,
    // más el número de parejas de conejos después de (meses - 2) meses (la nueva pareja se suma al segundo mes)
    return calcular_parejas_conejos(meses - 1) + calcular_parejas_conejos(meses - 2);
}

int main() {
    int meses = 12; // El periodo de un año es de 12 meses

    // Calcular el número de parejas de conejos después de un año
    int parejas = calcular_parejas_conejos(meses);

    cout << "Después de " << meses << " meses, el granjero podrá poner a la venta " << parejas << " parejas de conejos." << endl;

    return 0;
}