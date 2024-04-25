// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 20/04/2024
// Número de ejercicio: 09
// Problema planteado: Una infantería tiene n cantidad de reclutas. Se desea desarrollar un programa
/*mediante arreglos para determinar cuántos infantes están inscritos en cada curso y con
cuantas mujeres y cuantos hombres cuenta la nación en estas especialidades dentro de
esta fuerza.*/


#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número total de reclutas: ";
    cin >> n;

    // Arreglos para mantener un seguimiento de la cantidad de infantes en cada curso
    int cursos[3] = {0}; // Supongamos que hay tres cursos

    // Contadores para hombres y mujeres
    int hombres = 0;
    int mujeres = 0;

    // Solicitar la información de cada recluta
    for (int i = 0; i < n; ++i) {
        char genero;
        int curso;

        cout << "Ingrese el género del recluta " << i+1 << " (M/F): ";
        cin >> genero;

        if (genero == 'M') {
            hombres++;
        } else if (genero == 'F') {
            mujeres++;
        } else {
            cout << "Género no válido. Intente nuevamente." << endl;
            i--; // Volver a solicitar la información de este recluta
            continue;
        }

        cout << "Ingrese el curso del recluta " << i+1 << " (1/2/3): ";
        cin >> curso;

        if (curso >= 1 && curso <= 3) {
            cursos[curso - 1]++;
        } else {
            cout << "Curso no válido. Intente nuevamente." << endl;
            i--; // Volver a solicitar la información de este recluta
        }
    }

    // Mostrar la cantidad de infantes inscritos en cada curso
    cout << "\nCantidad de infantes inscritos en cada curso:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Curso " << i+1 << ": " << cursos[i] << endl;
    }

    // Mostrar la cantidad de hombres y mujeres
    cout << "\nCantidad total de hombres: " << hombres << endl;
    cout << "Cantidad total de mujeres: " << mujeres << endl;

    return 0;
}