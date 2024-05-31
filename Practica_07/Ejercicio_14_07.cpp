// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 27/05/2024
// Número de ejercicio: 14
// Problema planteado: Escriba un programa que tome como entrada el fichero del ejercicio 4 y una condición sobre el
/* campo Precio. La condición podrá ser:
Precio mayor o igual a 100 o cualquier otro dato ingresado por teclado.
Este programa debe generar como salida un fichero llamado "salida.dat" que contenga todos
aquellos artículos para los que se cumple la condición de entrada.
Mostrar el archivo de salida “salida.dat”*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de la estructura para almacenar la información de un artículo
struct Articulo {
    int codigo;
    string nombre;
    int existencias;
    double precio;
};

int main() {
    // Abrir el archivo de entrada en modo de lectura
    ifstream archivoEntrada("almacen.txt");
    if (!archivoEntrada.is_open()) {
        cout << "Error al abrir el archivo de entrada." << endl;
        return 1;
    }

    // Abrir el archivo de salida en modo de escritura
    ofstream archivoSalida("salida.dat");
    if (!archivoSalida.is_open()) {
        cout << "Error al abrir el archivo de salida." << endl;
        return 1;
    }

    // Leer el valor de la condición sobre el precio ingresado por el usuario
    double condicionPrecio;
    cout << "Ingrese el valor de la condicion sobre el precio: ";
    cin >> condicionPrecio;

    // Leer y procesar los datos de los artículos del archivo de entrada
    Articulo articulo;
    while (archivoEntrada >> articulo.codigo >> articulo.nombre >> articulo.existencias >> articulo.precio) {
        // Verificar si se cumple la condición sobre el precio
        if (articulo.precio >= condicionPrecio) {
            // Escribir el artículo en el archivo de salida
            archivoSalida << articulo.codigo << " " << articulo.nombre << " " << articulo.existencias << " " << articulo.precio << endl;
        }
    }

    // Cerrar los archivos
    archivoEntrada.close();
    archivoSalida.close();

    // Mostrar el contenido del archivo de salida
    cout << "Contenido del archivo 'salida.dat':" << endl;
    ifstream archivoSalidaLectura("salida.dat");
    if (archivoSalidaLectura.is_open()) {
        string linea;
        while (getline(archivoSalidaLectura, linea)) {
            cout << linea << endl;
        }
        archivoSalidaLectura.close();
    } else {
        cout << "Error al abrir el archivo de salida para lectura." << endl;
    }

    return 0;
}