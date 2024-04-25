// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 22/04/2024
// Número de ejercicio: 16
// En una clase, asuma que hay un número de 20 estudiantes. Cada estudiante esta
/*registrado en los mismos cursos en un semestre. Al final del semestre, el instructor
asigna letras de calificaciones de la A a la E para todos los seis cursos de cada
estudiante. Cada uno de los seis cursos es de 3 unidades (horas crédito). El promedio
de notas de los estudiantes se calcula en una escala de 10 puntos. Para realizar esto, a
continuación se presenta las notas asociadas con cada una de las calificaciones en
letras.*/

#include <iostream>
#include <iomanip>

using namespace std;

// Función para asignar un valor numérico a una letra de calificación
int valorCalificacion(char letra) {
    switch (letra) {
        case 'A':
            return 10;
        case 'B':
            return 8;
        case 'C':
            return 6;
        case 'D':
            return 4;
        case 'E':
            return 2;
        default:
            return 0;
    }
}

int main() {
    const int numEstudiantes = 20;
    const int numCursos = 6;
    
    // Matriz para almacenar las calificaciones de cada estudiante en cada curso
    char calificaciones[numEstudiantes][numCursos];

    // Capturar las calificaciones de cada estudiante en cada curso
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Ingrese las calificaciones del estudiante " << i+1 << " (separadas por espacios): ";
        for (int j = 0; j < numCursos; ++j) {
            cin >> calificaciones[i][j];
        }
    }

    // Calcular el promedio de notas para cada estudiante
    double promedios[numEstudiantes] = {0};
    for (int i = 0; i < numEstudiantes; ++i) {
        for (int j = 0; j < numCursos; ++j) {
            promedios[i] += valorCalificacion(calificaciones[i][j]);
        }
        promedios[i] /= numCursos;
    }

    // Mostrar los promedios de notas para cada estudiante
    cout << "\nPromedio de notas de los estudiantes:" << endl;
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Estudiante " << i+1 << ": " << fixed << setprecision(2) << promedios[i] << endl;
    }

    return 0;
}