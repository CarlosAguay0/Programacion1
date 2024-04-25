// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 22/04/2024
// Número de ejercicio: 12
// Problema planteado: Desarrolle un programa que lleve el control de los nombres, edades, calificaciones y
// coeficiente intelectual de 10 estudiantes. Capture los datos desde el teclado utilizando
// un ciclo for, imprime los datos en la pantalla cuando se termine de capturar los
// mismos. Emplear Arreglo de Estructuras.

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura para representar un estudiante
struct Estudiante {
    string nombre;
    int edad;
    float calificacion;
    float coeficienteIntelectual;
};

int main() {
    const int numEstudiantes = 10;
    Estudiante estudiantes[numEstudiantes];

    // Capturar los datos de cada estudiante
    cout << "Ingrese los datos de los 10 estudiantes:" << endl;
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "\nEstudiante " << i+1 << ":" << endl;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Calificación: ";
        cin >> estudiantes[i].calificacion;
        cout << "Coeficiente intelectual: ";
        cin >> estudiantes[i].coeficienteIntelectual;
    }

    // Imprimir los datos de los estudiantes
    cout << "\nDatos de los estudiantes:" << endl;
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "\nEstudiante " << i+1 << ":" << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Calificación: " << estudiantes[i].calificacion << endl;
        cout << "Coeficiente intelectual: " << estudiantes[i].coeficienteIntelectual << endl;
    }

    return 0;
}