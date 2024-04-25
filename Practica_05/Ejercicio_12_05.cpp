// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 21/04/2024
// Número de ejercicio: 11
// Problema planteado: Escriba un programa que en una estructura se lleve el control de un inventario de
// cintas de una tienda de video. Asegúrese de que la estructura incluya el titulo de la
// cinta, la longitud de la cinta, el precio de alquiler, la fecha en que se vendió, y la
// clasificación de la cinta

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Definición de la estructura para representar una cinta de video
struct CintaVideo {
    string titulo;
    float longitud;
    float precioAlquiler;
    string fechaVenta;
    string clasificacion;
};

int main() {
    // Crear una instancia de la estructura CintaVideo
    CintaVideo cinta;

    // Solicitar los datos de la cinta de video
    cout << "Ingrese el título de la cinta: ";
    getline(cin, cinta.titulo);

    cout << "Ingrese la longitud de la cinta en horas: ";
    cin >> cinta.longitud;

    cout << "Ingrese el precio de alquiler de la cinta: ";
    cin >> cinta.precioAlquiler;

    // Obtener la fecha actual
    time_t now = time(0);
    tm* localTime = localtime(&now);
    char fecha[80];
    strftime(fecha, 80, "%Y-%m-%d", localTime);
    cinta.fechaVenta = fecha;

    cout << "Ingrese la clasificación de la cinta: ";
    cin >> cinta.clasificacion;

    // Mostrar los datos de la cinta de video
    cout << "\nDatos de la cinta de video:" << endl;
    cout << "Título: " << cinta.titulo << endl;
    cout << "Longitud: " << cinta.longitud << " horas" << endl;
    cout << "Precio de alquiler: $" << cinta.precioAlquiler << endl;
    cout << "Fecha de venta: " << cinta.fechaVenta << endl;
    cout << "Clasificación: " << cinta.clasificacion << endl;

    return 0;
}