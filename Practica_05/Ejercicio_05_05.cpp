// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 20/04/2024
// Número de ejercicio: 5
// Problema planteado: El viceministerio de deportes hace una olimpiada a nivel nacional de los siguientes
/*deportes:
• Tiro con arco
• Atletismo
• Boxeo
• Ciclismo
• Natación
• Esgrima
También se registra los nombres de los atletas y que departamento representa y
que deporte práctica.
Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un
atleta y que me muestre el medallero final por departamento*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

// Definición de la estructura para representar un atleta
struct Atleta {
    string nombre;
    string departamento;
    string deporte;
    int medallasOro;
    int medallasPlata;
    int medallasBronce;
};

int main() {
    // Definir el mapa para almacenar el medallero por departamento
    map<string, int> medalleroPorDepartamento;

    // Definir un array de los nombres de los deportes
    string deportes[] = {"Tiro con arco", "Atletismo", "Boxeo", "Ciclismo", "Natación", "Esgrima"};

    // Solicitar al usuario el número de atletas
    int numAtletas;
    cout << "Ingrese el número de atletas: ";
    cin >> numAtletas;

    // Crear un array de estructuras Atleta
    Atleta atletas[numAtletas];

    // Solicitar los datos de los atletas
    for (int i = 0; i < numAtletas; ++i) {
        cout << "Ingrese el nombre del atleta " << i+1 << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el departamento del atleta " << i+1 << ": ";
        cin >> atletas[i].departamento;
        cout << "Ingrese el deporte del atleta " << i+1 << ": ";
        cin >> atletas[i].deporte;
        atletas[i].medallasOro = 0;
        atletas[i].medallasPlata = 0;
        atletas[i].medallasBronce = 0;
    }

    // Simular la entrega de medallas
    int opcion;
    do {
        cout << "Seleccione una opción:\n";
        cout << "1. Registrar medalla de oro\n";
        cout << "2. Registrar medalla de plata\n";
        cout << "3. Registrar medalla de bronce\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el número del atleta que ganó la medalla de oro: ";
                int oro;
                cin >> oro;
                atletas[oro-1].medallasOro++;
                break;
            case 2:
                cout << "Ingrese el número del atleta que ganó la medalla de plata: ";
                int plata;
                cin >> plata;
                atletas[plata-1].medallasPlata++;
                break;
            case 3:
                cout << "Ingrese el número del atleta que ganó la medalla de bronce: ";
                int bronce;
                cin >> bronce;
                atletas[bronce-1].medallasBronce++;
                break;
            case 0:
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
                break;
        }
    } while(opcion != 0);

    // Calcular el medallero por departamento
    for (int i = 0; i < numAtletas; ++i) {
        int totalMedallas = atletas[i].medallasOro + atletas[i].medallasPlata + atletas[i].medallasBronce;
        medalleroPorDepartamento[atletas[i].departamento] += totalMedallas;
    }

    // Mostrar el medallero por departamento
    cout << "\nMedallero por departamento:\n";
    for (auto it = medalleroPorDepartamento.begin(); it != medalleroPorDepartamento.end(); ++it) {
        cout << "Departamento: " << it->first << ", Medallas: " << it->second << endl;
    }

    return 0;
}