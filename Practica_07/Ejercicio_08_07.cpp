// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 25/05/2024
// Número de ejercicio: 8
// Problema planteado: Permitir obtener un listado en pantalla, de los datos que contiene el archivo creado en el punto
// anterior. Al terminar el listado se debe informar el número de registros contenidos en el
// archivo.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abrir el archivo en modo de lectura
    ifstream archivo("estudiantes.txt");

    // Verificar si se pudo abrir el archivo correctamente
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Variables para almacenar los datos del archivo
    string nombre, apellidos, programaAcademico;
    double nota;
    int numRegistros = 0;

    // Leer y mostrar los datos del archivo línea por línea
    cout << "Datos de los estudiantes:" << endl;
    while (getline(archivo, nombre, ';') && getline(archivo, apellidos, ';') &&
           getline(archivo, programaAcademico, ';') && archivo >> nota) {
        // Ignorar el salto de línea después de la nota
        archivo.ignore();

        // Mostrar los datos del estudiante
        cout << "Nombre: " << nombre << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Programa academico: " << programaAcademico << endl;
        cout << "Nota del curso: " << nota << endl;
        cout << endl;

        numRegistros++;
    }

    // Mostrar el número de registros contenidos en el archivo
    cout << "Numero de registros contenidos en el archivo: " << numRegistros << endl;

    // Cerrar el archivo
    archivo.close();

    return 0;
}