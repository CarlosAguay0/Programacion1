// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 05/03/2024
// Número de ejercicio: 20
// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) 
// y el nombre del mes. Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> nombreMeses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                                    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    int numeroMes;
    cout << "Ingrese el número de mes (1-12): ";
    cin >> numeroMes;

    if (numeroMes >= 1 && numeroMes <= 12) 
    {
        int dias;
        switch (numeroMes) 
        {
            case 2:
                dias = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias = 30;
                break;
            default:
                dias = 31;
                break;
        }

        cout << "El mes de " << nombreMeses[numeroMes - 1] << " tiene " << dias << " días." << endl;
    } else {
        cout << "Número de mes inválido." << endl;
    }

    return 0;
}