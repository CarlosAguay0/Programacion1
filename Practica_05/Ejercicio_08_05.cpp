// Materia: Programación I, Paralelo 4
// Autor: Carlos Alfredo Aguayo Perez
// Fecha modificación: 20/04/2024
// Número de ejercicio: 08
// Problema planteado: En una tienda donde solo hay 10 productos se desea calcular el total de ganancia que
/* produjo dicho negocio este mes. Para ello se cuenta por producto con: Precio del
Costo, precio de venta, código y cantidad vendida en ese periodo. Realizar programa
que permita calcular las Ganancias de la Tienda.*/


#include <iostream>

using namespace std;

// Definición de la estructura para representar un producto
struct Producto {
    float precioCosto;
    float precioVenta;
    int codigo;
    int cantidadVendida;
};

int main() {
    // Crear un array de estructuras Producto para los 10 productos
    Producto productos[10];

    // Solicitar los datos de cada producto
    for (int i = 0; i < 10; ++i) {
        cout << "Ingrese el precio de costo del producto " << i+1 << ": ";
        cin >> productos[i].precioCosto;
        cout << "Ingrese el precio de venta del producto " << i+1 << ": ";
        cin >> productos[i].precioVenta;
        cout << "Ingrese el código del producto " << i+1 << ": ";
        cin >> productos[i].codigo;
        cout << "Ingrese la cantidad vendida del producto " << i+1 << " en este mes: ";
        cin >> productos[i].cantidadVendida;
    }

    // Calcular las ganancias totales de la tienda
    float gananciasTotales = 0;
    for (int i = 0; i < 10; ++i) {
        float gananciaPorProducto = (productos[i].precioVenta - productos[i].precioCosto) * productos[i].cantidadVendida;
        gananciasTotales += gananciaPorProducto;
    }

    // Mostrar las ganancias totales de la tienda
    cout << "\nLas ganancias totales de la tienda este mes son: $" << gananciasTotales << endl;

    return 0;
}