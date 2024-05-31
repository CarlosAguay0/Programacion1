// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 26/05/2024
// Número de ejercicio: 12
// Problema planteado: Codifique un programa que cree un fichero para contener los datos relativos a los artículos de
/* un almacén.
Para cada artículo habrá de guardar la siguiente información:
• Código del artículo (Numérico)
• Nombre del artículo (Cadena de caracteres)
• Existencias actuales (Numérico)
• Precio (Numérico decimal).
Se deberán pedir datos de cada artículo por teclado hasta que como código se teclee el código
0.
El fichero se habrá de crear ordenado por el código del artículo.*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Definición de la estructura para almacenar la información de un artículo
struct Articulo {
    int codigo;
    string nombre;
    int existencias;
    double precio;
};

// Función para comparar dos artículos por su código
bool compararPorCodigo(const Articulo& a, const Articulo& b) {
    return a.codigo < b.codigo;
}

int main() {
    // Vector para almacenar los artículos
    vector<Articulo> articulos;

    // Solicitar y almacenar los datos de cada artículo hasta que se ingrese el código 0
    while (true) {
        Articulo articulo;

        // Solicitar el código del artículo
        cout << "Ingrese el codigo del articulo (0 para finalizar): ";
        cin >> articulo.codigo;

        // Verificar si se debe finalizar la entrada de datos
        if (articulo.codigo == 0) {
            break;
        }

        // Solicitar y leer el nombre del artículo
        cout << "Ingrese el nombre del articulo: ";
        cin.ignore(); // Limpiar el buffer de entrada antes de leer el nombre
        getline(cin, articulo.nombre);

        // Solicitar y leer las existencias actuales del artículo
        cout << "Ingrese las existencias actuales del articulo: ";
        cin >> articulo.existencias;

        // Solicitar y leer el precio del artículo
        cout << "Ingrese el precio del articulo: ";
        cin >> articulo.precio;

        // Agregar el artículo al vector de artículos
        articulos.push_back(articulo);
    }

    // Ordenar los artículos por su código
    sort(articulos.begin(), articulos.end(), compararPorCodigo);

    // Crear el archivo para almacenar los datos de los artículos
    ofstream archivo("almacen.txt");
    if (!archivo.is_open()) {
        cout << "Error al crear el archivo." << endl;
        return 1;
    }

    // Escribir los datos de los artículos en el archivo
    for (const auto& articulo : articulos) {
        archivo << "Codigo: " << articulo.codigo << ", ";
        archivo << "Nombre: " << articulo.nombre << ", ";
        archivo << "Existencias: " << articulo.existencias << ", ";
        archivo << "Precio: " << articulo.precio << endl;
    }

    // Cerrar el archivo
    archivo.close();

    cout << "Se ha creado el archivo 'almacen.txt' exitosamente." << endl;

    return 0;
}