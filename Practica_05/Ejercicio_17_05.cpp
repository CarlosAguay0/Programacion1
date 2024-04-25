// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 22/04/2024
// Número de ejercicio: 17
// Problema planteado: Establezca una estructura para almacenar datos relativos a los N libros o revistas
/*científicas de una biblioteca. Por cada libro o revista científica, mostrar la siguiente
información:
a) Numero de referencia.
b) Titulo
c) Nombre del autor
d) Editorial
e) Clase de publicación (libro o revista)
f) Numero de edición (solo libros)
g) Año de publicación (solo libros)
h) Nombre de la revista (solo revistas)*/

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