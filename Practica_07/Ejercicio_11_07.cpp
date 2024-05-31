// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 26/05/2024
// Número de ejercicio: 11
// Problema planteado: Amplíe el programa anterior que procesa clientes de una agencia matrimonial para que tome
/* los datos de todos los candidatos a estudiar del fichero PERSONAS.DAT del ejercicio anterior,
lea el nombre del cliente por teclado y finalmente genere como resultado un listado por
pantalla con los nombres de los candidatos aceptados y un fichero llamado ACEPTADOS.BIN
con toda la información correspondiente a los candidatos aceptados.
Una persona del fichero PERSONAS.DAT se considerará aceptable como candidato si tiene
diferente sexo y que haya nacido en el mes y año (El programa debe ser capaz de trabajar con
cualquier número de personas en el fichero PERSONAS.DAT).*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura para almacenar la información de una persona
struct Persona {
    string nombre;
    int edad;
    char sexo;
    string fechaNacimiento;
};

// Función para leer los datos de las personas desde el archivo PERSONAS.BIN
vector<Persona> leerPersonasDesdeArchivo() {
    vector<Persona> personas;

    // Abrir el archivo en modo de lectura binaria
    ifstream archivo("PERSONAS.BIN", ios::binary);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo PERSONAS.BIN" << endl;
        return personas;
    }

    // Leer los datos de las personas desde el archivo
    while (!archivo.eof()) {
        Persona persona;
        archivo.read(reinterpret_cast<char*>(&persona), sizeof(Persona));
        personas.push_back(persona);
    }

    // Cerrar el archivo
    archivo.close();

    return personas;
}

// Función para verificar si una persona es candidata aceptable
bool esCandidatoAceptable(const Persona& cliente, const Persona& candidato) {
    // Verificar que el sexo sea diferente
    if (cliente.sexo == candidato.sexo) {
        return false;
    }

    // Obtener el mes y el año de nacimiento del cliente
    string mesAnioCliente = cliente.fechaNacimiento.substr(3, 7);

    // Obtener el mes y el año de nacimiento del candidato
    string mesAnioCandidato = candidato.fechaNacimiento.substr(3, 7);

    // Verificar que el mes y el año de nacimiento sean iguales
    if (mesAnioCliente == mesAnioCandidato) {
        return true;
    }

    return false;
}

int main() {
    // Leer los datos de todas las personas del archivo PERSONAS.BIN
    vector<Persona> personas = leerPersonasDesdeArchivo();

    // Verificar si se leyeron correctamente los datos del archivo
    if (personas.empty()) {
        return 1;
    }

    // Solicitar al usuario el nombre del cliente
    string nombreCliente;
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);

    // Abrir el archivo ACEPTADOS.BIN en modo de escritura binaria
    ofstream archivoAceptados("ACEPTADOS.BIN", ios::binary);
    if (!archivoAceptados.is_open()) {
        cout << "Error al crear el archivo ACEPTADOS.BIN" << endl;
        return 1;
    }

    // Mostrar el listado de candidatos aceptados y escribir sus datos en el archivo ACEPTADOS.BIN
    cout << "Candidatos aceptados:" << endl;
    for (const auto& persona : personas) {
        if (persona.nombre != nombreCliente && esCandidatoAceptable(persona, personas[0])) {
            // Mostrar el nombre del candidato aceptado
            cout << persona.nombre << endl;

            // Escribir los datos del candidato aceptado en el archivo ACEPTADOS.BIN
            archivoAceptados.write(reinterpret_cast<const char*>(&persona), sizeof(Persona));
        }
    }

    // Cerrar el archivo ACEPTADOS.BIN
    archivoAceptados.close();

    cout << "Se ha creado el archivo ACEPTADOS.BIN con los candidatos aceptados." << endl;

    return 0;
}