// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 04/03/2024
// Número de ejercicio: 9
// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
//arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
//Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
//nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
//desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Función para obtener el nombre del alumno con la calificación más alta
string obtenerNombreMaximo(const vector<int>& calificaciones, const vector<string>& nombres) {
    auto it = max_element(calificaciones.begin(), calificaciones.end());
    int indice = distance(calificaciones.begin(), it);
    return nombres[indice];
}

// Función para obtener el nombre del alumno con la calificación más baja
string obtenerNombreMinimo(const vector<int>& calificaciones, const vector<string>& nombres) {
    auto it = min_element(calificaciones.begin(), calificaciones.end());
    int indice = distance(calificaciones.begin(), it);
    return nombres[indice];
}

// Función para obtener la carrera con el mejor desempeño en relación con el promedio del curso
string obtenerMejorCarrera(const vector<int>& calificaciones, const vector<string>& carreras, double promedioCurso) {
    double maximaDiferencia = 0;
    string mejorCarrera;
    for (size_t i = 0; i < calificaciones.size(); ++i) {
        double diferencia = abs(promedioCurso - calificaciones[i]);
        if (diferencia > maximaDiferencia) {
            maximaDiferencia = diferencia;
            mejorCarrera = carreras[i];
        }
    }
    return mejorCarrera;
}

int main() {
    // Datos de los estudiantes
    vector<string> nombres = {"Juan", "Maria", "Carlos", "Ana", "Pedro"};
    vector<int> calificaciones = {80, 90, 85, 75, 95};
    vector<string> carreras = {"Ingeniería", "Arquitectura", "Ingeniería", "Medicina", "Arquitectura"};

    // Calcular promedio del curso
    double promedioCurso = 0;
    for (int calificacion : calificaciones) {
        promedioCurso += calificacion;
    }
    promedioCurso /= calificaciones.size();

    // Obtener el nombre del alumno con la calificación más alta
    string nombreMaximo = obtenerNombreMaximo(calificaciones, nombres);

    // Obtener el nombre del alumno con la calificación más baja
    string nombreMinimo = obtenerNombreMinimo(calificaciones, nombres);

    // Obtener la carrera con el mejor desempeño en relación con el promedio del curso
    string mejorCarrera = obtenerMejorCarrera(calificaciones, carreras, promedioCurso);

    // Imprimir resultados
    cout << "Nombre del alumno con la calificación más alta: " << nombreMaximo << endl;
    cout << "Nombre del alumno con la calificación más baja: " << nombreMinimo << endl;
    cout << "Carrera con el mejor desempeño en relación con el promedio del curso: " << mejorCarrera << endl;

    return 0;
}