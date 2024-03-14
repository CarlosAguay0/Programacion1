// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/02/2024
// Número de ejercicio: 11
// Problema planteado:Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
//este arreglo determine la desviación típica

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Función para calcular la media de un vector de enteros
double calcularMedia(const vector<int>& datos) 
{
    int suma = 0;
    for (int dato : datos) 
    {
        suma += dato;
    }
    return static_cast<double>(suma) / datos.size();
}

// Función para calcular la desviación estándar de un vector de enteros
double calcularDesviacionEstandar(const vector<int>& datos) 
{
    double media = calcularMedia(datos);
    double suma_cuadrados_diferencias = 0;
    for (int dato : datos) 
    {
        suma_cuadrados_diferencias += pow(dato - media, 2);
    }
    double varianza = suma_cuadrados_diferencias / datos.size();
    return sqrt(varianza);
}

int main() 
{
    // Vector para almacenar las edades
    vector<int> edades;

    // Solicitar las edades hasta que se ingrese -1
    int edad;
    cout << "Ingrese las edades (ingrese -1 para terminar):" << endl;
    while (true) 
    {
        cin >> edad;
        if (edad == -1) 
        {
            break;
        }
        edades.push_back(edad);
    }

    // Calcular la desviación estándar
    double desviacion_estandar = calcularDesviacionEstandar(edades);

    cout << "La desviación estándar de las edades ingresadas es: " << desviacion_estandar << endl;

    return 0;
}