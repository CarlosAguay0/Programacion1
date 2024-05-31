// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 27/05/2024
// Número de ejercicio: 13
// Problema planteado: Escriba un programa que dados dos ficheros generados por el programa anterior y ordenados
// genere un tercer fichero que sea el resultado de mezclar de formar ordenada los dos primeros. 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para mezclar dos archivos ordenados y escribir el resultado en un tercer archivo
void mezclarArchivos(const string& archivo1, const string& archivo2, const string& archivoResultado) {
    // Abrir los dos archivos de entrada en modo de lectura
    ifstream file1(archivo1);
    ifstream file2(archivo2);

    // Abrir el archivo de salida en modo de escritura
    ofstream fileResultado(archivoResultado);

    // Verificar que los archivos de entrada se hayan abierto correctamente
    if (!file1.is_open() || !file2.is_open() || !fileResultado.is_open()) {
        cout << "Error al abrir los archivos." << endl;
        return;
    }

    string linea1, linea2;

    // Leer la primera línea de cada archivo
    getline(file1, linea1);
    getline(file2, linea2);

    // Mientras haya datos en ambos archivos
    while (!file1.eof() && !file2.eof()) {
        // Comparar las líneas y escribir la menor en el archivo de resultado
        if (linea1 < linea2) {
            fileResultado << linea1 << endl;
            getline(file1, linea1);
        } else {
            fileResultado << linea2 << endl;
            getline(file2, linea2);
        }
    }

    // Escribir el resto de los datos del archivo 1 si es que quedan
    while (!file1.eof()) {
        fileResultado << linea1 << endl;
        getline(file1, linea1);
    }

    // Escribir el resto de los datos del archivo 2 si es que quedan
    while (!file2.eof()) {
        fileResultado << linea2 << endl;
        getline(file2, linea2);
    }

    // Cerrar los archivos
    file1.close();
    file2.close();
    fileResultado.close();

    cout << "Los archivos se han mezclado correctamente en '" << archivoResultado << "'." << endl;
}

int main() {
    // Nombre de los archivos de entrada y salida
    string archivo1 = "archivo1.txt";
    string archivo2 = "archivo2.txt";
    string archivoResultado = "resultado.txt";

    // Llamar a la función para mezclar los archivos
    mezclarArchivos(archivo1, archivo2, archivoResultado);

    return 0;
}