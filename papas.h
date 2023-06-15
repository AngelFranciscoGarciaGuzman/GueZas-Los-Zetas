#include <string>
#include "precio.h"

#ifndef PAPAS_H_
#define PAPAS_H_

class Papas : public Articulo {
private:
    std::string estilo;
    std::string tamano;

public:
    // Constructor por defecto de Papas
    Papas() {};

    // Constructor con parámetros definidos
    Papas(std::string es, std::string ma) : estilo(es), tamano(ma) {};

    // Funciones get para obtener los valores de los atributos
    std::string get_estilo();
    std::string get_tamano();

    // Funciones set para asignar nuevos valores a los atributos
    void set_estilo(std::string);
    void set_tamano(std::string);

    // Implementación de la función virtual pura de la clase base
    std::string to_string() override;
};

/**
 * get_estilo devuelve el estilo de las papas.
 *
 * @return estilo de las papas.
 */
std::string Papas::get_estilo() {
    return estilo;
}

/**
 * get_tamano devuelve el tamaño de las papas.
 *
 * @return tamaño de las papas.
 */
std::string Papas::get_tamano() {
    return tamano;
}

/**
 * set_estilo asigna un nuevo estilo a las papas.
 *
 * @param n_estilo nuevo estilo de las papas.
 */
void Papas::set_estilo(std::string n_estilo) {
    estilo = n_estilo;
}

/**
 * set_tamano asigna un nuevo tamaño a las papas.
 *
 * @param n_tamano nuevo tamaño de las papas.
 */
void Papas::set_tamano(std::string n_tamano) {
    tamano = n_tamano;
}

/**
 * to_string convierte los atributos en una cadena de texto.
 *
 * @return cadena de texto con los valores y texto concatenado.
 */
std::string Papas::to_string() {
    std::stringstream aux;
    aux << "estilo: " << estilo << " tamano: " << tamano << std::endl;
    return aux.str();
}

#endif