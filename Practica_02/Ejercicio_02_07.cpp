// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 03/03/2024
// Número de ejercicio: 6
// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos intercalados.

#include <iostream>
#include <string>

using namespace std;

// Función para comparar dos vectores constantes
string compararVectores(const string vector1[], const string vector2[], int tamano) 
{
    for (int i = 0; i < tamano; ++i) 
    {
        if (vector1[i] != vector2[i]) 
        {
            return "Diferentes";
        }
    }
    return "Iguales";
}

int main() 
{
    // Vectores constantes de nombres
    const int tamano = 7;
    const string nombres1[tamano] = {"Julio", "Isabel", "Carlos", "Fabiola", "Moises", "Adriana", "Fercho"};
    const string nombres2[tamano] = {"Julio", "Isabel", "Carlos", "Fabiola", "Moises", "Adriana", "Fercho"};

    // Comparar los vectores
    string resultado = compararVectores(nombres1, nombres2, tamano);

    // Imprimir el resultado
    cout << "Los vectores son " << resultado << endl;

    return 0;
}