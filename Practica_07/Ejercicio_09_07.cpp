// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 25/05/2024
// Número de ejercicio: 9
// Problema planteado: Escribir un programa con la opción de encriptar y de desencriptar un fichero de texto.
// La encriptación consiste en que dado un fichero de texto de entrada genere otro fichero de
// salida de extensión <nombre>.COD donde el texto estará codificado (encriptado).
// Esta codificación consiste en reemplazar cada carácter por el tercero siguiente según la tabla
// ASCII.
// La opción de desencriptado consiste en leer un fichero <nombre>.COD y recuperar la
// información original

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para encriptar el contenido de un archivo de texto
void encriptarArchivo(const string& nombreArchivo) {
    // Abrir el archivo de entrada en modo de lectura
    ifstream archivoEntrada(nombreArchivo);
    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo de entrada." << endl;
        return;
    }

    // Crear el nombre del archivo de salida con la extensión .COD
    string nombreArchivoSalida = nombreArchivo + ".COD";

    // Abrir el archivo de salida en modo de escritura
    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cout << "Error al crear el archivo de salida." << endl;
        return;
    }

    // Leer el contenido del archivo de entrada, encriptarlo y escribirlo en el archivo de salida
    char caracter;
    while (archivoEntrada.get(caracter)) {
        // Encriptar el caracter
        caracter = caracter + 3;
        archivoSalida.put(caracter);
    }

    // Cerrar los archivos
    archivoEntrada.close();
    archivoSalida.close();

    cout << "El archivo ha sido encriptado exitosamente." << endl;
}

// Función para desencriptar el contenido de un archivo de texto encriptado
void desencriptarArchivo(const string& nombreArchivo) {
    // Abrir el archivo en modo de lectura
    ifstream archivoEntrada(nombreArchivo);
    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo encriptado." << endl;
        return;
    }

    // Crear el nombre del archivo de salida sin la extensión .COD
    string nombreArchivoSalida = nombreArchivo.substr(0, nombreArchivo.find_last_of('.'));

    // Abrir el archivo de salida en modo de escritura
    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cout << "Error al crear el archivo de salida." << endl;
        return;
    }

    // Leer el contenido del archivo encriptado, desencriptarlo y escribirlo en el archivo de salida
    char caracter;
    while (archivoEntrada.get(caracter)) {
        // Desencriptar el caracter
        caracter = caracter - 3;
        archivoSalida.put(caracter);
    }

    // Cerrar los archivos
    archivoEntrada.close();
    archivoSalida.close();

    cout << "El archivo ha sido desencriptado exitosamente." << endl;
}

int main() {
    int opcion;
    string nombreArchivo;

    cout << "Ingrese el nombre del archivo de texto: ";
    cin >> nombreArchivo;

    cout << "Seleccione una opcion:" << endl;
    cout << "1. Encriptar" << endl;
    cout << "2. Desencriptar" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            encriptarArchivo(nombreArchivo);
            break;
        case 2:
            desencriptarArchivo(nombreArchivo);
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}