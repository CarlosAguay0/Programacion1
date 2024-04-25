// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 20/04/2024
// Número de ejercicio: 4
// Problema planteado: Se tiene una lista de empleados de la Alcaldía de La Paz y esta se almacena en una
// variable tipo struct llamada “empleado”. La información con la que se cuenta es:
// nombre, genero, salario
// Realizar un programa en C++ que lea un array de estructuras los datos de los N
// trabajadores de la empresa e imprima los datos de los empleados con menor y mayor
// salario.

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura para representar un empleado
struct Empleado {
    string nombre;
    char genero;
    float salario;
};

int main() {
    int N;
    cout << "Ingrese el número de empleados: ";
    cin >> N;

    // Crear un array de estructuras Empleado
    Empleado empleados[N];

    // Leer los datos de los empleados
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese el nombre del empleado " << i+1 << ": ";
        cin >> empleados[i].nombre;
        cout << "Ingrese el género del empleado " << i+1 << " (M/F): ";
        cin >> empleados[i].genero;
        cout << "Ingrese el salario del empleado " << i+1 << ": ";
        cin >> empleados[i].salario;
    }

    // Encontrar el empleado con el salario más alto y más bajo
    int indiceEmpleadoMayorSalario = 0;
    int indiceEmpleadoMenorSalario = 0;
    for (int i = 1; i < N; ++i) {
        if (empleados[i].salario > empleados[indiceEmpleadoMayorSalario].salario) {
            indiceEmpleadoMayorSalario = i;
        }
        if (empleados[i].salario < empleados[indiceEmpleadoMenorSalario].salario) {
            indiceEmpleadoMenorSalario = i;
        }
    }

    // Imprimir los datos del empleado con menor salario
    cout << "\nEmpleado con menor salario:" << endl;
    cout << "Nombre: " << empleados[indiceEmpleadoMenorSalario].nombre << endl;
    cout << "Género: " << empleados[indiceEmpleadoMenorSalario].genero << endl;
    cout << "Salario: " << empleados[indiceEmpleadoMenorSalario].salario << endl;

    // Imprimir los datos del empleado con mayor salario
    cout << "\nEmpleado con mayor salario:" << endl;
    cout << "Nombre: " << empleados[indiceEmpleadoMayorSalario].nombre << endl;
    cout << "Género: " << empleados[indiceEmpleadoMayorSalario].genero << endl;
    cout << "Salario: " << empleados[indiceEmpleadoMayorSalario].salario << endl;

    return 0;
}