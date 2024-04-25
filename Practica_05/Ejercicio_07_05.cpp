// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 20/04/2024
// Número de ejercicio: 07
// Problema planteado: Escriba un programa que en una estructura se lleve el control de un inventario de
/*cintas de una tienda de video. Asegúrese de que la estructura incluya el título de la
cinta, la longitud de la cinta (tiempo), el precio de alquiler, existencia disponible para
venta y la clasificación de la cinta (acción, terror, infantil, drama, ficción, aventura,
documental). Una vez ingresada la información de cada cinta mostrar resumen de
cuántas cintas por clasificación se tiene*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

// Definición de la estructura para representar una cinta de video
struct CintaVideo {
    string titulo;
    float longitud;
    float precioAlquiler;
    int existencia;
    string clasificacion;
};

int main() {
    // Crear un mapa para mantener un seguimiento de la cantidad de cintas por clasificación
    map<string, int> cintasPorClasificacion;

    // Solicitar al usuario el número de cintas
    int numCintas;
    cout << "Ingrese el número de cintas de video: ";
    cin >> numCintas;

    // Crear un array de estructuras CintaVideo
    CintaVideo cintas[numCintas];

    // Solicitar los datos de cada cinta
    for (int i = 0; i < numCintas; ++i) {
        cout << "Ingrese el título de la cinta " << i+1 << ": ";
        cin.ignore();
        getline(cin, cintas[i].titulo);
        cout << "Ingrese la longitud de la cinta en horas: ";
        cin >> cintas[i].longitud;
        cout << "Ingrese el precio de alquiler de la cinta: ";
        cin >> cintas[i].precioAlquiler;
        cout << "Ingrese la cantidad de existencia disponible para venta: ";
        cin >> cintas[i].existencia;
        cout << "Ingrese la clasificación de la cinta (acción, terror, infantil, drama, ficción, aventura, documental): ";
        cin >> cintas[i].clasificacion;

        // Incrementar el contador de cintas por clasificación
        cintasPorClasificacion[cintas[i].clasificacion]++;
    }

    // Mostrar el resumen de la cantidad de cintas por clasificación
    cout << "\nResumen de cintas por clasificación:\n";
    for (auto it = cintasPorClasificacion.begin(); it != cintasPorClasificacion.end(); ++it) {
        cout << "Clasificación: " << it->first << ", Cantidad: " << it->second << endl;
    }

    return 0;
}