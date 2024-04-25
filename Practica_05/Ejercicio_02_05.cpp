// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 11/04/2024
// Fecha modificación: 20/04/2024
// Número de ejercicio: 2
// Problema planteado: De acuerdo con la siguiente estructura, realice en C++ un programa que lea N atletas y
// nos devuelva el país que mayor número de medallas ha ganado.

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura para representar un atleta
struct Atleta {
    string nombre;
    string pais;
    string deporte;
    int numMedallas;
};

int main() {
    int N;
    cout << "Ingrese el número de atletas: ";
    cin >> N;

    // Crear un array de estructuras Atleta
    Atleta atletas[N];

    // Leer los datos de los atletas
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese el nombre del atleta " << i+1 << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el país del atleta " << i+1 << ": ";
        cin >> atletas[i].pais;
        cout << "Ingrese el deporte del atleta " << i+1 << ": ";
        cin >> atletas[i].deporte;
        cout << "Ingrese el número de medallas del atleta " << i+1 << ": ";
        cin >> atletas[i].numMedallas;
    }

    // Encontrar el país con el mayor número de medallas
    string paisMayorNumeroMedallas;
    int mayorNumeroMedallas = 0;
    for (int i = 0; i < N; ++i) {
        if (atletas[i].numMedallas > mayorNumeroMedallas) {
            mayorNumeroMedallas = atletas[i].numMedallas;
            paisMayorNumeroMedallas = atletas[i].pais;
        }
    }

    // Imprimir el país con el mayor número de medallas
    cout << "El país con mayor número de medallas es: " << paisMayorNumeroMedallas << endl;

    return 0;
}