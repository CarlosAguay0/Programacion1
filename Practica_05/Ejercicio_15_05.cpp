// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 22/04/2024
// Número de ejercicio: 15
// Problema planteado: Establecer un listado de suscriptores de una revista a través de una estructura, cuyos
// datos de entrada serán los datos de cada suscriptor (Nombre, Cedula, Mes de
// Inscripción, Año de Inscripción).

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la estructura para representar un suscriptor
struct Suscriptor {
    string nombre;
    int cedula;
    int mesInscripcion;
    int añoInscripcion;
};

int main() {
    // Vector para almacenar los suscriptores
    vector<Suscriptor> suscriptores;

    // Variable para determinar si se debe continuar agregando suscriptores
    char continuar;

    do {
        Suscriptor suscriptor;

        // Capturar los datos del suscriptor
        cout << "Ingrese el nombre del suscriptor: ";
        getline(cin, suscriptor.nombre);

        cout << "Ingrese la cedula del suscriptor: ";
        cin >> suscriptor.cedula;

        cout << "Ingrese el mes de inscripcion del suscriptor (1-12): ";
        cin >> suscriptor.mesInscripcion;

        cout << "Ingrese el ano de inscripcion del suscriptor: ";
        cin >> suscriptor.añoInscripcion;

        // Agregar el suscriptor al vector
        suscriptores.push_back(suscriptor);

        // Solicitar al usuario si desea continuar agregando suscriptores
        cout << "¿Desea agregar otro suscriptor? (s/n): ";
        cin >> continuar;
        cin.ignore(); // Limpiar el buffer del teclado

    } while (continuar == 's' || continuar == 'S');

    // Mostrar el listado de suscriptores
    cout << "\nListado de suscriptores de la revista:" << endl;
    for (size_t i = 0; i < suscriptores.size(); ++i) {
        cout << "\nSuscriptor " << i+1 << ":" << endl;
        cout << "Nombre: " << suscriptores[i].nombre << endl;
        cout << "Cedula: " << suscriptores[i].cedula << endl;
        cout << "Mes de Inscripcion: " << suscriptores[i].mesInscripcion << endl;
        cout << "Año de Inscripcion: " << suscriptores[i].anoInscripcion << endl;
    }

    return 0;
}