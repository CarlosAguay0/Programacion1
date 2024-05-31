// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 28/05/2024
// Número de ejercicio: 15
// Problema planteado: Escriba un programa que tenga como entrada un fichero que contenga un texto y dé como
// resultado una estadística del número de palabras.
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main() {
    // Nombre del archivo de entrada
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo de texto: ";
    getline(cin, nombreArchivo);

    // Abrir el archivo de entrada en modo de lectura
    ifstream archivoEntrada(nombreArchivo);
    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    // Contador de palabras
    int contadorPalabras = 0;

    // Mapa para almacenar las palabras y su frecuencia
    map<string, int> frecuenciaPalabras;

    // Leer el archivo línea por línea
    string linea;
    while (getline(archivoEntrada, linea)) {
        // Crear un stringstream para procesar la línea palabra por palabra
        stringstream ss(linea);
        string palabra;
        while (ss >> palabra) {
            // Incrementar el contador de palabras
            contadorPalabras++;

            // Incrementar la frecuencia de la palabra en el mapa
            frecuenciaPalabras[palabra]++;
        }
    }

    // Cerrar el archivo de entrada
    archivoEntrada.close();

    // Mostrar la estadística del número de palabras
    cout << "Estadisticas del numero de palabras:" << endl;
    cout << "Total de palabras: " << contadorPalabras << endl;
    cout << "Frecuencia de cada palabra:" << endl;
    for (const auto& par : frecuenciaPalabras) {
        cout << par.first << ": " << par.second << endl;
    }

    return 0;
}