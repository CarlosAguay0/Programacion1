// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 21/04/2024
// Número de ejercicio: 11
// Problema planteado: Escriba un programa que en una estructura guarde los datos de 05 amigos (as) suyos
// (as) y los muestre por pantalla, utilizando para ello un arreglo de estructura, la misma
// estructura contendrá (Nombre, Apellido, Edad, Sexo, Dirección, y Teléfono).

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura para representar un amigo
struct Amigo {
    string nombre;
    string apellido;
    int edad;
    char sexo;
    string direccion;
    string telefono;
};

int main() {
    const int numAmigos = 5;
    Amigo amigos[numAmigos];

    // Leer los datos de cada amigo
    cout << "Ingrese los datos de los 5 amigos:" << endl;
    for (int i = 0; i < numAmigos; ++i) {
        cout << "\nAmigo " << i+1 << ":" << endl;
        cout << "Nombre: ";
        cin >> amigos[i].nombre;
        cout << "Apellido: ";
        cin >> amigos[i].apellido;
        cout << "Edad: ";
        cin >> amigos[i].edad;
        cout << "Sexo (M/F): ";
        cin >> amigos[i].sexo;
        cout << "Dirección: ";
        cin >> amigos[i].direccion;
        cout << "Teléfono: ";
        cin >> amigos[i].telefono;
    }

    // Mostrar los datos de cada amigo
    cout << "\nDatos de los amigos:" << endl;
    for (int i = 0; i < numAmigos; ++i) {
        cout << "\nAmigo " << i+1 << ":" << endl;
        cout << "Nombre: " << amigos[i].nombre << endl;
        cout << "Apellido: " << amigos[i].apellido << endl;
        cout << "Edad: " << amigos[i].edad << endl;
        cout << "Sexo: " << amigos[i].sexo << endl;
        cout << "Dirección: " << amigos[i].direccion << endl;
        cout << "Teléfono: " << amigos[i].telefono << endl;
    }

    return 0;
}