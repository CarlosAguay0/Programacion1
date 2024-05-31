// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 24/05/2024
// Número de ejercicio: 5
// Problema planteado: Copiar un fichero de texto en otro.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombreArchivoOrigen, nombreArchivoDestino;

    // Solicitar al usuario los nombres de los archivos
    cout << "Ingrese el nombre del archivo de origen: ";
    cin >> nombreArchivoOrigen;

    cout << "Ingrese el nombre del archivo de destino: ";
    cin >> nombreArchivoDestino;

    // Abrir el archivo de origen en modo de lectura
    ifstream archivoOrigen(nombreArchivoOrigen);

    // Verificar si se pudo abrir el archivo de origen correctamente
    if (!archivoOrigen.is_open()) {
        cout << "Error al abrir el archivo de origen." << endl;
        return 1; // Salir del programa con código de error
    }

    // Abrir el archivo de destino en modo de escritura
    ofstream archivoDestino(nombreArchivoDestino);

    // Verificar si se pudo abrir el archivo de destino correctamente
    if (!archivoDestino.is_open()) {
        cout << "Error al abrir el archivo de destino." << endl;
        return 1; // Salir del programa con código de error
    }

    // Leer el contenido del archivo de origen línea por línea y escribirlo en el archivo de destino
    string linea;
    while (getline(archivoOrigen, linea)) {
        archivoDestino << linea << endl;
    }

    // Cerrar los archivos
    archivoOrigen.close();
    archivoDestino.close();

    cout << "El archivo se ha copiado correctamente." << endl;

    return 0;
}