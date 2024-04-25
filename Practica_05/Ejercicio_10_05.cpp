// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 20/04/2024
// Número de ejercicio: 10
// Problema planteado: Desarrolle una estructura que guarde los datos de los n alumnos de la materia
// programación en Lenguaje C, y los muestres por pantalla, la estructura debe tener
// (cedula, nombre, apellido, edad, profesión, lugar de nacimiento, dirección y teléfono).

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura para representar un alumno de programación en C
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
    cout << "Ingrese el número de alumnos: ";
    cin >> n;

    // Crear un array de estructuras Alumno
    Alumno alumnos[n];

    // Leer los datos de cada alumno
    for (int i = 0; i < n; ++i) {
        cout << "\nIngrese los datos del alumno " << i+1 << ":" << endl;
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

    // Mostrar los datos de cada alumno
    cout << "\nDatos de los alumnos de programación en Lenguaje C:" << endl;
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