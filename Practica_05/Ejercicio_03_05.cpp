// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha creación: 20/04/2024
// Número de ejercicio: 3
// Problema planteado: Realice un programa en C++ con funciones y estructuras para el estacionamiento del
/*Megacenter.
Este estacionamiento cuenta con 4 pisos, cada piso tiene distintas capacidades de
autos
Piso 1 – 50 autos
Piso 2 – 40 autos
Piso 3 – 30 autos
Piso 4 – 45 autos
El estacionamiento debe recibir varios tipos de autos (vagoneta, camionetas,
automóviles, minivans y motocicletas), marca del auto, modelo del auto y color del
auto.
Escribir un programa en C++ utilizando funciones y estructuras para:
• Simular la entrada de vehículos, el programa debe pedir la cantidad de
vehículos ingresados y el programa debe simular los tipos de vehículo, la
marca, el modelo, el color y en que piso se han estacionado.
• La simulación puede repetirse varias veces hasta que el usuario ingrese el valor
de 0 (cero) en la cantidad de vehículos. La cantidad de vehículos debe se
incremental.
• Luego de cada ingreso de vehículos se desea saber cuantos hay estacionado en
cada piso.
• Cuantos son vagoneta, camionetas, automóviles, minivans y motocicletas.
• Hacer un reporte por colores de autos, modelo y marca.
• La simulación debe determinar cuando el parqueo se ha llenado.
• La simulación debe determinar cuántos espacios libres queda.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura para representar un vehículo
struct Vehiculo {
    string tipo;
    string marca;
    string modelo;
    string color;
    int piso;
};

// Función para simular la entrada de vehículos
void simularEntrada(vector<Vehiculo>& estacionamiento, int& totalVehiculos) {
    int cantidad;
    cout << "Ingrese la cantidad de vehículos a ingresar (ingrese 0 para salir): ";
    cin >> cantidad;
    
    if (cantidad <= 0) {
        cout << "Saliendo del programa..." << endl;
        return;
    }

    for (int i = 0; i < cantidad; ++i) {
        Vehiculo vehiculo;
        cout << "Ingrese el tipo de vehículo (vagoneta, camioneta, automóvil, minivan, motocicleta): ";
        cin >> vehiculo.tipo;
        cout << "Ingrese la marca del vehículo: ";
        cin >> vehiculo.marca;
        cout << "Ingrese el modelo del vehículo: ";
        cin >> vehiculo.modelo;
        cout << "Ingrese el color del vehículo: ";
        cin >> vehiculo.color;

        // Determinar el piso de estacionamiento
        if (estacionamiento.size() < 50) {
            vehiculo.piso = 1;
        } else if (estacionamiento.size() < 90) {
            vehiculo.piso = 2;
        } else if (estacionamiento.size() < 120) {
            vehiculo.piso = 3;
        } else if (estacionamiento.size() < 165) {
            vehiculo.piso = 4;
        } else {
            cout << "El estacionamiento está lleno." << endl;
            return;
        }

        estacionamiento.push_back(vehiculo);
        totalVehiculos++;
    }
}

// Función para contar la cantidad de vehículos por tipo
void contarVehiculosPorTipo(const vector<Vehiculo>& estacionamiento) {
    int vagoneta = 0, camioneta = 0, automovil = 0, minivan = 0, motocicleta = 0;
    for (const auto& vehiculo : estacionamiento) {
        if (vehiculo.tipo == "vagoneta") {
            vagoneta++;
        } else if (vehiculo.tipo == "camioneta") {
            camioneta++;
        } else if (vehiculo.tipo == "automóvil") {
            automovil++;
        } else if (vehiculo.tipo == "minivan") {
            minivan++;
        } else if (vehiculo.tipo == "motocicleta") {
            motocicleta++;
        }
    }

    cout << "Cantidad de vehículos por tipo:" << endl;
    cout << "Vagonetas: " << vagoneta << endl;
    cout << "Camionetas: " << camioneta << endl;
    cout << "Automóviles: " << automovil << endl;
    cout << "Minivans: " << minivan << endl;
    cout << "Motocicletas: " << motocicleta << endl;
}

// Función para hacer un reporte por color de autos
void reportePorColor(const vector<Vehiculo>& estacionamiento) {
    cout << "Reporte por color de autos:" << endl;
    for (const auto& vehiculo : estacionamiento) {
        cout << "Color: " << vehiculo.color << ", Marca: " << vehiculo.marca << ", Modelo: " << vehiculo.modelo << endl;
    }
}

// Función para imprimir la cantidad de vehículos estacionados en cada piso
void imprimirCantidadPorPiso(const vector<Vehiculo>& estacionamiento) {
    int cantidadPorPiso[4] = {0};
    for (const auto& vehiculo : estacionamiento) {
        cantidadPorPiso[vehiculo.piso - 1]++;
    }

    cout << "Cantidad de vehículos por piso:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Piso " << i + 1 << ": " << cantidadPorPiso[i] << endl;
    }
}

int main() {
    vector<Vehiculo> estacionamiento;
    int totalVehiculos = 0;

    while (true) {
        simularEntrada(estacionamiento, totalVehiculos);
        if (totalVehiculos == 0) {
            break;
        }
        imprimirCantidadPorPiso(estacionamiento);
        contarVehiculosPorTipo(estacionamiento);
        reportePorColor(estacionamiento);
        cout << "Espacios libres: " << 185 - totalVehiculos << endl;
    }

    return 0;
}