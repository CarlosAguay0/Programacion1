// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 11/03/2024
// Número de ejercicio: 6
// Problema planteado: Crea un programa que cuente cuantas veces se repite cada palabra y que muestre el recuento final de todas ellas.
//- Los signos de puntuación no forman parte de la palabra.
//- Una palabra es la misma, aunque aparezca en mayúsculas y minúsculas.
//- No se pueden utilizar funciones propias del lenguaje que lo resuelvan automáticamente.

#include <iostream>
#include <unordered_map>

using namespace std;

bool esLetra(char c) 
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char aMinuscula(char c) 
{
    if (c >= 'A' && c <= 'Z') 
    {
        return c + ('a' - 'A');
    }
    return c;
}

bool esPalabra(const string& palabra) 
{
    for (char c : palabra) 
    {
        if (!esLetra(c)) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    string texto;
    unordered_map<string, int> frecuencia;

    cout << "Ingrese un texto (Finalice Ctrl+Z ):" << endl;

    // Leer el texto linea por linea
    while (getline(cin, texto)) 
    {
        string palabra = "";
        bool esPalabraActual = false;
        for (char c : texto) 
        {
            if (esLetra(c)) 
            {
                palabra += aMinuscula(c);
                esPalabraActual = true;
            } else if (esPalabraActual) 
            {
                frecuencia[palabra]++;
                palabra = "";
                esPalabraActual = false;
            }
        }
        // Procesar la última palabra si termina el texto sin un carácter no alfabetico
        if (esPalabraActual && esPalabra(palabra)) 
        {
            frecuencia[palabra]++;
        }
    }

    
    cout << "Recuento de palabras:" << endl;
    for (const auto& par : frecuencia) 
    {
        cout << par.first << ": " << par.second << endl;
    }

    return 0;
}