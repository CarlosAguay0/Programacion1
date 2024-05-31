// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 27/05/2024
// Número de ejercicio: 3
// Problema planteado: Escribir un programa que escriba la lista de caracteres ASCII dentro de un archivo de texto.
 
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Abrir el archivo en modo de escritura
    ofstream archivo("ascii.txt");

    // Verificar si se pudo abrir el archivo correctamente
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Escribir la lista de caracteres ASCII en el archivo
    for (int i = 0; i < 128; ++i) {
        archivo << "Caracter: " << static_cast<char>(i) << "\t\tASCII: " << i << endl;
    }

    // Cerrar el archivo
    archivo.close();

    cout << "Se ha escrito correctamente en el archivo ascii.txt." << endl;

    return 0;
}