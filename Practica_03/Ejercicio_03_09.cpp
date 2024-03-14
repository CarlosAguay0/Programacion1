// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 12/03/2024
// Número de ejercicio: 8
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, 
// posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el de los pesos. (realizar con vectores)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Persona 
{
    string nombre;
    int edad;
    double estatura;
    double peso;
};

int main() 
{
    const int cantidad_personas = 12;
    vector<Persona> personas(cantidad_personas);

    // Leer los datos de las doce personas
    for (int i = 0; i < cantidad_personas; ++i) 
    {
        cout << "Ingrese los datos de la persona " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Estatura (en metros): ";
        cin >> personas[i].estatura;
        cout << "Peso (en kilogramos): ";
        cin >> personas[i].peso;
        cout << endl;
    }

    // Encontrar la persona de menor edad
    int indice_persona_menor_edad = 0;
    for (int i = 1; i < cantidad_personas; ++i) 
    {
        if (personas[i].edad < personas[indice_persona_menor_edad].edad) 
        {
            indice_persona_menor_edad = i;
        }
    }

    // Calcular el promedio de estaturas
    double suma_estaturas = 0.0;
    for (const auto& persona : personas) 
    {
        suma_estaturas += persona.estatura;
    }
    double promedio_estaturas = suma_estaturas / cantidad_personas;

    // Calcular el promedio de pesos
    double suma_pesos = 0.0;
    for (const auto& persona : personas) 
    {
        suma_pesos += persona.peso;
    }
    double promedio_pesos = suma_pesos / cantidad_personas;

    // Mostrar los resultados
    cout << "La persona de menor edad es: " << personas[indice_persona_menor_edad].nombre << endl;
    cout << "El promedio de estaturas es: " << promedio_estaturas << " metros" << endl;
    cout << "El promedio de pesos es: " << promedio_pesos << " kilogramos" << endl;

    return 0;
}