// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 29/05/2024
// Número de ejercicio: 16
// Problema planteado: Escribir un programa que genere a partir de un fichero de entrada que contiene una tabla de
// números reales otro fichero de salida <nombre>.BIN grabado en formato binario.
// Ej:
// 1.23 3.45 12.5
// 4.8 3.9 0.83 ........................
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    // Nombre del archivo de entrada y salida
    string nombreArchivoEntrada;
    cout << "Ingrese el nombre del archivo de entrada: ";
    cin >> nombreArchivoEntrada;

    string nombreArchivoSalida;
    cout << "Ingrese el nombre del archivo de salida binario: ";
    cin >> nombreArchivoSalida;

    // Abrir el archivo de entrada en modo de lectura
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo de entrada." << endl;
        return 1;
    }

    // Vector para almacenar los números reales
    vector<double> numeros;

    // Leer los números del archivo de entrada
    double numero;
    while (archivoEntrada >> numero) {
        numeros.push_back(numero);
    }

    // Cerrar el archivo de entrada
    archivoEntrada.close();

    // Abrir el archivo de salida en modo de escritura binaria
    ofstream archivoSalida(nombreArchivoSalida, ios::binary);
    if (!archivoSalida.is_open()) {
        cout << "Error al abrir el archivo de salida binario." << endl;
        return 1;
    }

    // Escribir los números en el archivo binario
    for (const double& num : numeros) {
        archivoSalida.write(reinterpret_cast<const char*>(&num), sizeof(num));
    }

    // Cerrar el archivo de salida
    archivoSalida.close();

    cout << "Se han escrito los numeros en el archivo binario exitosamente." << endl;

    return 0;
}