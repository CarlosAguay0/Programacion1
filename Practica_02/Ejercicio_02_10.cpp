// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 04/03/2024
// Número de ejercicio: 9
// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
//arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
//Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
//nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
//desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Función para encontrar el índice del elemento máximo en un vector
int indiceMaximo(const vector<int>& vector)
{
    int maximo = vector[0];
    int indice = 0;
    for (int i = 1; i < vector.size(); ++i)
    {
        if (vector[i] > maximo) 
        {
            maximo = vector[i];
            indice = i;
        }
    }
    return indice;
}

// Función para encontrar el índice del elemento mínimo en un vector
int indiceMinimo(const vector<int>& vector) 
{
    int minimo = vector[0];
    int indice = 0;
    for (int i = 1; i < vector.size(); ++i) 
    {
        if (vector[i] < minimo) 
        {
            minimo = vector[i];
            indice = i;
        }
    }
    return indice;
}

int main() {
    // Arreglos con la población y los nombres de los departamentos
    vector<string> nombresDepartamentos = {"La Paz", "Cochabamba", "Santa Cruz", "Oruro", "Potosi", "Beni", "Sucre", "Tarija", "Pando"};
    vector<int> poblacionDepartamentos = {90000, 8000, 7000, 6000, 5000, 4000, 3000, 2000, 1000};

    // Encontrar el índice del departamento con la mayor población
    int indiceMax = indiceMaximo(poblacionDepartamentos);

    // Encontrar el índice del departamento con la menor población
    int indiceMin = indiceMinimo(poblacionDepartamentos);

    // Imprimir el nombre del departamento con la mayor población
    cout << "Departamento con mayor población: " << nombresDepartamentos[indiceMax] << endl;

    // Imprimir el nombre del departamento con la menor población
    cout << "Departamento con menor población: " << nombresDepartamentos[indiceMin] << endl;

    return 0;
}