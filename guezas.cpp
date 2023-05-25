#include<iostream>
#include<string>

//Incluir archivos de encabezados
#include"hamburguesas.h"
#include"malteadas.h"
#include"papas.h"
#include"orden.h"

std::string none;

int main() {

    // Crea una instancia de la clase "Orden" llamada "num_1"
    Orden num_1;

    for (int i = 0; i < 4; ++i) {
        std::cout << "La Hamburguesa " << i+1 << " llevara queso?" << std::endl;
        std::string queso;

        // Lee una línea de texto desde la entrada estándar y la almacena en la variable "queso"
        getline(std::cin, queso);

        std::cout << "Llevara verdura?" << std::endl;
        std::string verdura;

        // Lee una línea de texto desde la entrada estándar y la almacena en la variable "verdura"
        getline(std::cin, verdura);

        std::cout << "Tipo de salsa?" << std::endl;
        std::string salsa;

        // Lee una línea de texto desde la entrada estándar y la almacena en la variable "salsa"
        getline(std::cin, salsa);

        float precio_h;
        std::cout << "Asignar precio a hamburguesa" << std::endl;

        // Lee un número de punto flotante desde la entrada estándar y lo almacena en la variable "precio_h"
        std::cin >> precio_h; 
        getline(std::cin, none);

        // Agrega una hamburguesa a la orden "num_1" con los datos proporcionados
        num_1.agrega_hamburguesa(queso, verdura, salsa, i);

        // Asigna el precio a la hamburguesa agregada en la posición "i"
        num_1.asignar_precio_h(precio_h, i);
    }

    for (int i = 0; i < 4; ++i) {
        std::cout << "La Malteada " << i+1 << ", de cuantos litros es?" << std::endl;
        float tamano_m;

        // Lee un número de punto flotante desde la entrada estándar y lo almacena en la variable "tamano_m"
        std::cin >> tamano_m; 
        
        // Lee una línea vacía para consumir el carácter de salto de línea pendiente
        getline(std::cin, none); 

        std::cout << "Sabor?" << std::endl;
        std::string sabor_m;

        // Lee una línea de texto desde la entrada estándar y la almacena en la variable "sabor_m"
        getline(std::cin, sabor_m); 

        float precio_m;
        std::cout << "Asignar precio a la malteada" << std::endl;

        // Lee un número de punto flotante desde la entrada estándar y lo almacena en la variable "precio_m"
        std::cin >> precio_m; 

        // Lee una línea vacía para consumir el carácter de salto de línea pendiente
        getline(std::cin, none); 


        // Agrega una malteada a la orden "num_1" con los datos proporcionados
        num_1.agrega_malteada(sabor_m, tamano_m, i); 

        // Asigna el precio a la malteada agregada en la posición "i"
        num_1.asignar_precio_m(precio_m, i); 
    }

    for (int i = 0; i < 4; ++i) {
        std::cout << "La Orden de papas " << i+1 << ", cual es el estilo?" << std::endl;
        std::string estilo_p;

        // Lee una línea de texto desde la entrada estándar y la almacena en la variable "estilo_p"
        getline(std::cin, estilo_p); 

        std::cout << "tamano?" << std::endl;
        std::string tamano_p;

        // Lee una línea de texto desde la entrada estándar y la almacena en la variable "tamano_p"
        getline(std::cin, tamano_p); 

        float precio_p;
        std::cout << "Asignar precio a orden de papas" << std::endl;

        // Lee un número de punto flotante desde la entrada estándar y lo almacena en la variable "precio_p"
        std::cin >> precio_p;

        // Lee una línea vacía para consumir el carácter de salto de línea pendiente
        getline(std::cin, none); 


        // Agrega una orden de papas a la orden "num_1" con los datos proporcionados
        num_1.agrega_papas(estilo_p, tamano_p, i); 

        // Asigna el precio a la orden de papas agregada en la posición "i"
        num_1.asignar_precio_p(precio_p, i); 
    }

    std::cout << num_1.estatus_orden() << std::endl;

    system("pause");
}






