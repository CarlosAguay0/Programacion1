// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 12/03/2024
// Número de ejercicio: 8
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>
#include <sstream>

using namespace std;

// Función para calcular la edad
int calcularEdad(int diaActual, int mesActual, int añoActual, int diaNacimiento, int mesNacimiento, int añoNacimiento) 
{
    int edad = añoActual - añoNacimiento;
    // Verificar si el cumpleaños ya ha pasado este año
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) 
    {
        edad--;
    }
    return edad;
}

int main() 
{
    // Variables para almacenar la fecha actual y la fecha de nacimiento
    int diaActual, mesActual, añoActual;
    int diaNacimiento, mesNacimiento, añoNacimiento;

    // Solicitar al usuario que ingrese la fecha actual
    cout << "Ingrese la fecha actual (DD MM AAAA): ";
    cin >> diaActual >> mesActual >> añoActual;

    // Solicitar al usuario que ingrese la fecha de nacimiento
    cout << "Ingrese la fecha de nacimiento (DD MM AAAA): ";
    cin >> diaNacimiento >> mesNacimiento >> añoNacimiento;

    // Calcular la edad utilizando la función calcularEdad
    int edad = calcularEdad(diaActual, mesActual, añoActual, diaNacimiento, mesNacimiento, añoNacimiento);

    // Mostrar la edad
    cout << "La edad es: " << edad << " años." << endl;

    return 0;
}