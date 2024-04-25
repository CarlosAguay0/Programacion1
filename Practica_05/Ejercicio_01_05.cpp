// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 11/04/2024
// Fecha modificación: 20/04/2024
// Número de ejercicio: 1
// Problema planteado: 1.    La información de todos los empleados de la UCB se almacena en una variable tipo
// struct llamada “empleado”.
// La información con que se cuenta es: nombre, ci, departamento y salario.
// Realizar un programa en C++ que lea un array de estructura de los datos de N
// empleados e imprima los siguiente:
// • Empleado con mayor salario
// • Empleado con menor salario
// • Promedio salarial
// • Promedio por departamento
// • Departamento con mayor salario en promedio
// • Departamento con menor salario en promedio

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura para representar un empleado
struct Empleado {
    string nombre;
    int ci;
    string departamento;
    float salario;
};

// Función para calcular el promedio de un array de salarios
float calcularPromedio(float salarios[], int n) {
    float suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += salarios[i];
    }
    return suma / n;
}

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
        cout << "Ingrese la CI del empleado " << i+1 << ": ";
        cin >> empleados[i].ci;
        cout << "Ingrese el departamento del empleado " << i+1 << ": ";
        cin >> empleados[i].departamento;
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

    // Calcular el promedio salarial
    float salarios[N];
    for (int i = 0; i < N; ++i) {
        salarios[i] = empleados[i].salario;
    }
    float promedioSalarial = calcularPromedio(salarios, N);

    // Calcular el promedio por departamento
    float sumaSalariosPorDepartamento[N] = {0};
    int contadorEmpleadosPorDepartamento[N] = {0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (empleados[i].departamento == empleados[j].departamento) {
                sumaSalariosPorDepartamento[i] += empleados[j].salario;
                contadorEmpleadosPorDepartamento[i]++;
            }
        }
    }
    float promediosPorDepartamento[N];
    for (int i = 0; i < N; ++i) {
        promediosPorDepartamento[i] = sumaSalariosPorDepartamento[i] / contadorEmpleadosPorDepartamento[i];
    }

    // Encontrar el departamento con mayor y menor salario promedio
    int indiceDepartamentoMayorPromedio = 0;
    int indiceDepartamentoMenorPromedio = 0;
    for (int i = 1; i < N; ++i) {
        if (promediosPorDepartamento[i] > promediosPorDepartamento[indiceDepartamentoMayorPromedio]) {
            indiceDepartamentoMayorPromedio = i;
        }
        if (promediosPorDepartamento[i] < promediosPorDepartamento[indiceDepartamentoMenorPromedio]) {
            indiceDepartamentoMenorPromedio = i;
        }
    }

    // Imprimir los resultados
    cout << "\nEmpleado con mayor salario: " << empleados[indiceEmpleadoMayorSalario].nombre << endl;
    cout << "Empleado con menor salario: " << empleados[indiceEmpleadoMenorSalario].nombre << endl;
    cout << "Promedio salarial: " << promedioSalarial << endl;
    cout << "Promedio por departamento:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Departamento " << empleados[i].departamento << ": " << promediosPorDepartamento[i] << endl;
    }
    cout << "Departamento con mayor salario promedio: " << empleados[indiceDepartamentoMayorPromedio].departamento << endl;
    cout << "Departamento con menor salario promedio: " << empleados[indiceDepartamentoMenorPromedio].departamento << endl;

    return 0;
}