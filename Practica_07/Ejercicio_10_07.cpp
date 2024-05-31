// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 26/05/2024
// Número de ejercicio: 10
// Problema planteado: Escriba un programa que cree un fichero binario llamado "PERSONAS.BIN" en el que se guarde
/* la información de un número indeterminado de personas.
La información que se guardará por cada persona será:
• Nombre: De 1 a 30 caracteres. WILLY TENORIO
• Edad numérico (>= 1 y <=100) 40
• Sexo CHAR (M/F). M
• FechaNacimiento CHAR(10) (formato dd/mm/yyyy) 01/01/1980
La información correspondiente a cada persona se leerá del teclado.
El proceso finalizará cuando se teclee un campo "Nombre" que esté solamente con el carácter
de espacio.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de la estructura para almacenar la información de una persona
struct Persona {
    string nombre;
    int edad;
    char sexo;
    string fechaNacimiento;
};

int main() {
    // Abrir el archivo en modo de escritura binaria
    ofstream archivo("PERSONAS.BIN", ios::binary);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo PERSONAS.BIN" << endl;
        return 1;
    }

    // Leer la información de las personas desde el teclado y escribirla en el archivo
    while (true) {
        Persona persona;

        // Solicitar y leer el nombre de la persona
        cout << "Ingrese el nombre de la persona (deje en blanco para salir): ";
        getline(cin, persona.nombre);

        // Verificar si se debe terminar el proceso
        if (persona.nombre.empty() || persona.nombre == " ") {
            break;
        }

        // Solicitar y leer la edad de la persona
        cout << "Ingrese la edad de la persona: ";
        cin >> persona.edad;

        // Solicitar y leer el sexo de la persona
        cout << "Ingrese el sexo de la persona (M/F): ";
        cin >> persona.sexo;

        // Solicitar y leer la fecha de nacimiento de la persona
        cout << "Ingrese la fecha de nacimiento de la persona (dd/mm/yyyy): ";
        cin.ignore(); // Limpiar el buffer de entrada antes de leer la fecha
        getline(cin, persona.fechaNacimiento);

        // Escribir la información de la persona en el archivo
        archivo.write(reinterpret_cast<const char*>(&persona), sizeof(Persona));
    }

    // Cerrar el archivo
    archivo.close();

    cout << "Se ha creado el archivo PERSONAS.BIN exitosamente." << endl;

    return 0;
}