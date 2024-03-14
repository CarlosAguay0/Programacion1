// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 03/03/2024
// Número de ejercicio: 8
// Problema planteado: Se tiene el arreglo
//Ventas:
//0 1 2 10 11
//vene vfeb vmar . . vnov vdic
//Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
//contiene los nombres de los meses:
//Meses:
//0 1 2 10 11
//“Ene” “Feb” “Mar” . . “Nov” “Dic”
//Escriba un programa que obtenga:
//• ¿En qué mes(es) se dieron las ventas máximas de la empresa?
//• ¿A cuánto ascendieron las ventas máximas?
//• ¿Cuál fue el total de las ventas?
//Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <string>

using namespace std;

const int N_MESES = 12;

// Función para obtener el nombre del mes
string obtenerNombreMes(int indice) 
{
    const string nombresMeses[N_MESES] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};
    return nombresMeses[indice];
}

int main() 
{
    int ventas[N_MESES];

    // Solicitar las ventas mensuales al usuario
    cout << "Ingrese las ventas mensuales de la empresa:" << endl;
    for (int i = 0; i < N_MESES; ++i) 
    {
        cout << obtenerNombreMes(i) << ": ";
        cin >> ventas[i];
    }

    // Calcular el total de las ventas y encontrar las ventas máximas
    int totalVentas = 0;
    int ventasMaximas = ventas[0];
    for (int i = 0; i < N_MESES; ++i) 
    {
        totalVentas += ventas[i];
        if (ventas[i] > ventasMaximas)
        {
            ventasMaximas = ventas[i];
        }
    }

    // Imprimir el total de las ventas
    cout << "Total de ventas: " << totalVentas << endl;

    // Imprimir las ventas máximas y los meses correspondientes
    cout << "Ventas máximas: " << ventasMaximas << endl;
    cout << "Mes(es) con ventas máximas:";
    for (int i = 0; i < N_MESES; ++i) 
    {
        if (ventas[i] == ventasMaximas) 
        {
            cout << " " << obtenerNombreMes(i);
        }
    }
    cout << endl;

    return 0;
}