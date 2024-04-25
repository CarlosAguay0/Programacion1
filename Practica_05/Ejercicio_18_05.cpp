// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 22/04/2024
// Número de ejercicio: 17
/* Problema planteado: Se desea calcular las notas finales de N alumnos de un curso, así como también el
promedio, mínimo y máximo de éstas. Se ingresará el nombre del estudiante y las
notas parciales de cada uno de éstos. Las notas parciales corresponden a la I1, I2, T1,
T2 y Examen. La nota final se calcula empleando la fórmula:
NF = 0.7*NP + 0.3*Ex
En donde NP es la nota de presentación calculada como:
NP = (I1+I2+T1+T2)/4*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura para representar a cada alumno
struct Alumno {
    string nombre;
    float I1;
    float I2;
    float T1;
    float T2;
    float Examen;
    float NP; // Nota de presentación
    float NF; // Nota final
};

int main() {
    int N;
    cout << "Ingrese el número de alumnos: ";
    cin >> N;

    // Vector para almacenar los datos de los alumnos
    vector<Alumno> alumnos(N);

    // Capturar los datos de cada alumno
    for (int i = 0; i < N; ++i) {
        cout << "\nDatos del alumno " << i+1 << ":" << endl;
        cout << "Nombre: ";
        cin >> alumnos[i].nombre;
        cout << "Nota I1: ";
        cin >> alumnos[i].I1;
        cout << "Nota I2: ";
        cin >> alumnos[i].I2;
        cout << "Nota T1: ";
        cin >> alumnos[i].T1;
        cout << "Nota T2: ";
        cin >> alumnos[i].T2;
        cout << "Nota Examen: ";
        cin >> alumnos[i].Examen;

        // Calcular la nota de presentación (NP)
        alumnos[i].NP = (alumnos[i].I1 + alumnos[i].I2 + alumnos[i].T1 + alumnos[i].T2) / 4.0;

        // Calcular la nota final (NF)
        alumnos[i].NF = 0.7 * alumnos[i].NP + 0.3 * alumnos[i].Examen;
    }

    // Calcular el promedio, mínimo y máximo de las notas finales
    float promedio = 0;
    float minNota = alumnos[0].NF;
    float maxNota = alumnos[0].NF;
    for (int i = 0; i < N; ++i) {
        promedio += alumnos[i].NF;
        if (alumnos[i].NF < minNota) {
            minNota = alumnos[i].NF;
        }
        if (alumnos[i].NF > maxNota) {
            maxNota = alumnos[i].NF;
        }
    }
    promedio /= N;

    // Mostrar los resultados
    cout << "\nResumen de notas finales:" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Nota mínima: " << minNota << endl;
    cout << "Nota máxima: " << maxNota << endl;

    return 0;
}