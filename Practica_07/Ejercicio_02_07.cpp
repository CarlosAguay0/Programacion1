// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 27/05/2024
// Número de ejercicio: 2
// Problema planteado: Escribir un programa que lea el archivo creado en el ejercicio anterior y muestre por pantalla su
// contenido.
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abrir el archivo en modo de lectura
    ifstream archivo("hola.txt");

    // Verificar si se pudo abrir el archivo correctamente
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Leer el contenido del archivo línea por línea y mostrarlo por pantalla
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    // Cerrar el archivo
    archivo.close();

    return 0;
}