// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/04/2024
// Fecha modificación: 12/04/2024
// Número de ejercicio: 06
// Problema planteado: Desarrolle un arreglo de estructura para un programa que lea una lista de alumnos (no
/*se conoce la cantidad de alumnos) para cada alumno se solicitará: CI, Nombre y
apellido, Nombre de asignatura, calificación; una vez ingresada la información para
cada alumno, calcular el porcentaje de alumnos aprobados y reprobados. Deberá
indicar: cantidad de alumnos aprobados, porcentaje de aprobados, cantidad de
alumnos reprobados, porcentaje de aprobados.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura para representar un alumno
struct Alumno {
    int CI;
    string nombreApellido;
    string asignatura;
    float calificacion;
};

int main() {
    vector<Alumno> alumnos;
    int aprobados = 0;
    int reprobados = 0;

    while (true) {
        Alumno alumno;
        cout << "Ingrese el CI del alumno (ingrese 0 para salir): ";
        cin >> alumno.CI;

        if (alumno.CI == 0) {
            break;
        }

        cin.ignore(); // Limpiar el buffer del teclado

        cout << "Ingrese el nombre y apellido del alumno: ";
        getline(cin, alumno.nombreApellido);
        cout << "Ingrese el nombre de la asignatura: ";
        getline(cin, alumno.asignatura);
        cout << "Ingrese la calificación del alumno: ";
        cin >> alumno.calificacion;

        if (alumno.calificacion >= 51) {
            aprobados++;
        } else {
            reprobados++;
        }

        alumnos.push_back(alumno);
    }

    int totalAlumnos = alumnos.size();
    float porcentajeAprobados = (static_cast<float>(aprobados) / totalAlumnos) * 100;
    float porcentajeReprobados = (static_cast<float>(reprobados) / totalAlumnos) * 100;

    cout << "\nResumen de calificaciones:" << endl;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Porcentaje de alumnos aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Porcentaje de alumnos reprobados: " << porcentajeReprobados << "%" << endl;

    return 0;
}