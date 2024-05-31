// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 29/05/2024
// Número de ejercicio: 17
// Problema planteado: Dado una tabla grabada en un fichero en formato binario <nombre>.BIN hallar la suma
// horizontal y vertical y grabar la tabla y los resultados en otro fichero de texto o binario según se
// introduzca por pantalla.
// El resultado en texto sería el siguiente:
//  Ej:
// 1.23 3.45 12.5 17,18
// 4.8 3.9 0.83 9,53
// 6,03 7,35 13,33 26,71

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Función para leer una tabla de un archivo binario
vector<vector<double>> leerTablaBinaria(const string& nombreArchivo) {
    vector<vector<double>> tabla;
    ifstream archivo(nombreArchivo, ios::binary);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo binario." << endl;
        return tabla;
    }

    double valor;
    while (archivo.read(reinterpret_cast<char*>(&valor), sizeof(valor))) {
        tabla.back().push_back(valor);
    }

    archivo.close();
    return tabla;
}

// Función para calcular la suma horizontal y vertical de la tabla
pair<vector<double>, vector<double>> calcularSumas(const vector<vector<double>>& tabla) {
    int filas = tabla.size();
    int columnas = tabla[0].size();

    vector<double> sumaHorizontal(filas, 0.0);
    vector<double> sumaVertical(columnas, 0.0);

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            sumaHorizontal[i] += tabla[i][j];
            sumaVertical[j] += tabla[i][j];
        }
    }

    return {sumaHorizontal, sumaVertical};
}

// Función para escribir la tabla y las sumas en un archivo de texto
void escribirTablaYSumas(const vector<vector<double>>& tabla, const vector<double>& sumaHorizontal, const vector<double>& sumaVertical, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo de salida." << endl;
        return;
    }

    int filas = tabla.size();
    int columnas = tabla[0].size();

    // Escribir la tabla en el archivo
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            archivo << tabla[i][j];
            if (j < columnas - 1) {
                archivo << " ";
            }
        }
        archivo << " " << sumaHorizontal[i] << endl;
    }

    // Escribir las sumas verticales en la última fila del archivo
    for (int j = 0; j < columnas; ++j) {
        archivo << sumaVertical[j];
        if (j < columnas - 1) {
            archivo << " ";
        }
    }
    archivo << endl;

    archivo.close();
}

int main() {
    string nombreArchivoEntrada, nombreArchivoSalida;
    cout << "Ingrese el nombre del archivo binario de entrada: ";
    cin >> nombreArchivoEntrada;
    cout << "Ingrese el nombre del archivo de salida: ";
    cin >> nombreArchivoSalida;

    // Leer la tabla del archivo binario
    vector<vector<double>> tabla = leerTablaBinaria(nombreArchivoEntrada);
    if (tabla.empty()) {
        return 1;
    }

    // Calcular las sumas horizontal y vertical
    auto [sumaHorizontal, sumaVertical] = calcularSumas(tabla);

    // Escribir la tabla y las sumas en un archivo de texto
    escribirTablaYSumas(tabla, sumaHorizontal, sumaVertical, nombreArchivoSalida);

    cout << "Se han calculado las sumas y se han escrito en el archivo de salida." << endl;

    return 0;
}