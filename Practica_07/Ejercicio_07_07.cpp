// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 25/05/2024
// Número de ejercicio: 7
// Problema planteado: Crear un archivo de texto en donde en cada registro se guardan los siguientes datos de un
// estudiante, cada campo se debe separar con el símbolo “;”:
// • Nombre
// • Apellidos
// • Programa académico que estudia
// • Nota del curso.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abrir el archivo en modo de escritura
    ofstream archivo("estudiantes.txt");

    // Verificar si se pudo abrir el archivo correctamente
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Solicitar al usuario el número de estudiantes a ingresar
    int numEstudiantes;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    // Limpiar el búfer de entrada
    cin.ignore();

    // Ingresar los datos de cada estudiante y escribirlos en el archivo
    for (int i = 0; i < numEstudiantes; ++i) {
        string nombre, apellidos, programaAcademico;
        double nota;

        cout << "\nIngrese los datos del estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellidos: ";
        getline(cin, apellidos);
        cout << "Programa academico: ";
        getline(cin, programaAcademico);
        cout << "Nota del curso: ";
        cin >> nota;

        // Escribir los datos del estudiante en el archivo
        archivo << nombre << ";" << apellidos << ";" << programaAcademico << ";" << nota << endl;
    }

    // Cerrar el archivo
    archivo.close();

    cout << "\nSe ha creado el archivo estudiantes.txt con los datos de los estudiantes." << endl;

    return 0;
}