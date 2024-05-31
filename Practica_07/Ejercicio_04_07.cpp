// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 24/05/2024
// Número de ejercicio: 4
// Problema planteado: Escribir un programa que lea y muestre en pantalla el archive generado en el ejercicio anterior
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abrir el archivo en modo de lectura
    ifstream archivo("ascii.txt");

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