#include<iostream>
#include<string>

// Incluir archivos de encabezados
#include"hamburguesas.h"
#include"malteadas.h"
#include"papas.h"
#include"orden.h"

#include <limits>

std::string none;

int main() {
    Orden orden;

    std::cout << "Ingrese los detalles de las hamburguesas:\n";
    for (int i = 0; i < 4; ++i) {
        std::string queso, verduras, salsa;
        float precio, promocion;

        std::cout << "Hamburguesa " << i + 1 << ":\n";
        
        // Obtener los detalles de la hamburguesa del usuario
        std::cout << "Queso: ";
        std::getline(std::cin, queso);

        std::cout << "Verduras: ";
        std::getline(std::cin, verduras);

        std::cout << "Salsa: ";
        std::getline(std::cin, salsa);

        std::cout << "Precio: ";
        std::cin >> precio;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Promoción (%): ";
        std::cin >> promocion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Crear un objeto de tipo Hamburguesa con los detalles proporcionados
        Articulo* hamburguesa = new Hamburguesa(queso, verduras, salsa);
        hamburguesa->set_promo(promocion);
        hamburguesa->set_precio(precio);

        // Agregar la hamburguesa a la orden
        orden.agrega_hamburguesa(hamburguesa, i);
    }

    std::cout << "\nIngrese los detalles de las malteadas:\n";
    for (int i = 0; i < 4; ++i) {
        std::string sabor;
        float magnitud, precio, promocion;

        std::cout << "Malteada " << i + 1 << ":\n";
        
        // Obtener los detalles de la malteada del usuario
        std::cout << "Sabor: ";
        std::getline(std::cin, sabor);

        std::cout << "Magnitud (litros): ";
        std::cin >> magnitud;

        std::cout << "Precio: ";
        std::cin >> precio;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Promoción (%): ";
        std::cin >> promocion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Crear un objeto de tipo Malteada con los detalles proporcionados
        Articulo* malteada = new Malteada(sabor, magnitud);
        malteada->set_promo(promocion);
        malteada->set_precio(precio);

        // Agregar la malteada a la orden
        orden.agrega_malteada(malteada, i);
    }

    std::cout << "\nIngrese los detalles de las papas:\n";
    for (int i = 0; i < 4; ++i) {
        std::string estilo, tamano;
        float precio, promocion;

        std::cout << "Papas " << i + 1 << ":\n";
        
        // Obtener los detalles de las papas del usuario
        std::cout << "Estilo: ";
        std::getline(std::cin, estilo);

        std::cout << "Tamaño: ";
        std::getline(std::cin, tamano);

        std::cout << "Precio: ";
        std::cin >> precio;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Promoción (%): ";
        std::cin >> promocion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Crear un objeto de tipo Papas con los detalles proporcionados
        Articulo* papas = new Papas(estilo, tamano);
        papas->set_promo(promocion);
        papas->set_precio(precio);

        // Agregar las papas a la orden
        orden.agrega_papas(papas, i);
    }

    std::cout << "\nEstado de la orden:\n";
    std::cout << "------------------\n";
    
    // Imprimir el estado actual de la orden
    std::cout << orden.estatus_orden() << "\n";
    std::cout << "------------------\n";

    system("pause");
}