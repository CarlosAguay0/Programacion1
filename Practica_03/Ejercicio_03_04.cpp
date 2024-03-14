// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 10/03/2024
// Número de ejercicio: 4
// Problema planteado: Crea una única función (importante que sólo sea una) 
// que sea capaz de calcular y retornar el área de un polígono
// - La función recibirá por parámetro sólo UN polígono a la vez.
// - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
// - Imprime el cálculo del área de un polígono de cada tipo.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Función para calcular y retornar el área de un polígono
double calcularAreaPoligono(const string& tipo, double lado1, double lado2 = 0.0) {
    double area = 0.0;

    // Verificar el tipo de polígono y calcular el área correspondiente
    if (tipo == "Triangulo") {
        area = (lado1 * lado2) / 2.0; // Fórmula del área del triángulo: base * altura / 2
    } else if (tipo == "Cuadrado") {
        area = lado1 * lado1; // Fórmula del área del cuadrado: lado * lado
    } else if (tipo == "Rectangulo") {
        area = lado1 * lado2; // Fórmula del área del rectángulo: base * altura
    } else {
        cout << "Error: Tipo de polígono no soportado." << endl;
        return 0.0;
    }

    return area;
}

int main() {
    // Ejemplo de uso con diferentes polígonos
    double baseTriangulo = 5.0;
    double alturaTriangulo = 4.0;
    double ladoCuadrado = 6.0;
    double baseRectangulo = 7.0;
    double alturaRectangulo = 5.0;

  
    cout << "El área del Triángulo es: " << calcularAreaPoligono("Triangulo", baseTriangulo, alturaTriangulo) << endl;
    cout << "El área del Cuadrado es: " << calcularAreaPoligono("Cuadrado", ladoCuadrado) << endl;
    cout << "El área del Rectángulo es: " << calcularAreaPoligono("Rectangulo", baseRectangulo, alturaRectangulo) << endl;

    return 0;
}