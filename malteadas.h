#include <string>
#include "precio.h"

#ifndef MALTEADA_H_
#define MALTEADA_H_

class Malteada : public Articulo {
private:
    std::string sabor;
    float magnitud;

public:
    // Constructor por defecto de Malteada
    Malteada() : sabor(""), magnitud(0) {};

    // Constructor con parámetros definidos
    Malteada(std::string sa, float ma) : sabor(sa), magnitud(ma) {};

    // Funciones get para obtener los valores de los atributos
    std::string get_sabor();
    float get_magnitud();

    // Funciones set para asignar nuevos valores a los atributos
    void set_sabor(std::string);
    void set_magnitud(float);

    // Implementación de la función virtual pura de la clase base
    std::string to_string() override;
};

/**
 * get_sabor devuelve el sabor de la malteada.
 *
 * @return sabor de la malteada.
 */
std::string Malteada::get_sabor() {
    return sabor;
}

/**
 * get_magnitud devuelve la magnitud de la malteada.
 *
 * @return magnitud de la malteada.
 */
float Malteada::get_magnitud() {
    return magnitud;
}

/**
 * set_sabor asigna un nuevo sabor a la malteada.
 *
 * @param n_sabor nuevo sabor de la malteada.
 */
void Malteada::set_sabor(std::string n_sabor) {
    sabor = n_sabor;
}

/**
 * set_magnitud asigna una nueva magnitud a la malteada.
 *
 * @param n_magnitud nueva magnitud de la malteada.
 */
void Malteada::set_magnitud(float n_magnitud) {
    magnitud = n_magnitud;
}


/**
 * to_string convierte los atributos en una cadena de texto.
 *
 * @return cadena de texto con los valores y texto concatenado.
 */
std::string Malteada::to_string() {
    std::stringstream aux;
    aux << "sabor: " << sabor << " magnitud: " << magnitud << " litros" << std::endl;
    return aux.str();
}

#endif
