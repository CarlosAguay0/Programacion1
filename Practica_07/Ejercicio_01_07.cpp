// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 27/05/2024
// Número de ejercicio: 1
// Problema planteado: 1. Escribir un programa que escriba “hola mundo” dentro de un archivo llamado hola.txt
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Abrir el archivo en modo de escritura
    ofstream archivo("hola.txt");

    // Verificar si se pudo abrir el archivo correctamente
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Escribir "hola mundo" en el archivo
    archivo << "hola mundo" << endl;

    // Cerrar el archivo
    archivo.close();

    cout << "Se ha escrito correctamente en el archivo hola.txt." << endl;

    return 0;
}