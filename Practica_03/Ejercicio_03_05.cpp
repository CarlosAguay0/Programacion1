// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 10/03/2024
// Número de ejercicio: 5
// Problema planteado: Crea un programa que invierta el orden de una cadena 
// de texto sin usar funciones propias del lenguaje que lo hagan de forma automática.
//- Si le pasamos "Hola mundo" nos retornaría "odnum aloH"

#include <iostream>
#include <string>

using namespace std;

// Función para invertir una cadena de texto
string invertirCadena(const string& cadena) 
{
    string invertida = ""; // Crear una cadena vacía para almacenar la cadena invertida

    // Iterar sobre la cadena original de forma inversa
    for (int i = cadena.length() - 1; i >= 0; --i) 
    {
        invertida += cadena[i]; // Agregar cada carácter al inicio de la cadena invertida
    }

    return invertida;
}

int main() 
{
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto); 

    // Invertir la cadena de texto e imprimir el resultado
    string textoInvertido = invertirCadena(texto);
    cout << "La cadena invertida es: " << textoInvertido << endl;

    return 0;
}