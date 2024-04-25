// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 22/04/2024
// Número de ejercicio: 12
// Problema planteado: Desarrolle un programa que en una estructura guarde los datos de los N alumnos de la
// Asignatura Programación en Lenguaje C++; y los imprima, la estructura debe tener
// (Cedula, nombre, apellido, edad, profesión, lugar de nacimiento, dirección, teléfono).

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la estructura para representar un alumno de Programación en C++
struct Alumno {
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugarNacimiento;
    string direccion;
    string telefono;
};

int main() {
    int n;
    cout << "Ingrese el número de alumnos de la asignatura Programación en C++: ";
    cin >> n;

    // Vector para almacenar los datos de los alumnos
    vector<Alumno> alumnos(n);

    // Capturar los datos de cada alumno
    for (int i = 0; i < n; ++i) {
        cout << "\nDatos del alumno " << i+1 << ":" << endl;
        cout << "Cédula: ";
        cin >> alumnos[i].cedula;
        cout << "Nombre: ";
        cin >> alumnos[i].nombre;
        cout << "Apellido: ";
        cin >> alumnos[i].apellido;
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Profesión: ";
        cin >> alumnos[i].profesion;
        cout << "Lugar de nacimiento: ";
        cin >> alumnos[i].lugarNacimiento;
        cout << "Dirección: ";
        cin >> alumnos[i].direccion;
        cout << "Teléfono: ";
        cin >> alumnos[i].telefono;
    }

    // Imprimir los datos de cada alumno
    cout << "\nDatos de los alumnos de la asignatura Programación en C++:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "\nAlumno " << i+1 << ":" << endl;
        cout << "Cédula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesión: " << alumnos[i].profesion << endl;
        cout << "Lugar de nacimiento: " << alumnos[i].lugarNacimiento << endl;
        cout << "Dirección: " << alumnos[i].direccion << endl;
        cout << "Teléfono: " << alumnos[i].telefono << endl;
    }

    return 0;
}