#include <string>
#include "precio.h"
#include <sstream>

#ifndef HAMBURGUESA_H_
#define HAMBURGUESA_H_

class Hamburguesa : public Articulo {
private:
    std::string queso;
    std::string verduras;
    std::string salsa;

public:
    // Constructor por defecto de Hamburguesa
    Hamburguesa() {};

    // Constructor con parámetros definidos
    Hamburguesa(std::string que, std::string ve, std::string sa) : queso(que), verduras(ve), salsa(sa) {};

    // Funciones get para obtener los valores de los atributos
    std::string get_queso();
    std::string get_verdura();
    std::string get_salsa();

    // Funciones set para asignar nuevos valores a los atributos
    void set_queso(std::string);
    void set_verdura(std::string);
    void set_salsa(std::string);

    // Implementación de la función virtual pura de la clase base
    std::string to_string() override;
};

/**
 * get_queso devuelve el tipo de queso de la hamburguesa.
 *
 * @return tipo de queso de la hamburguesa.
 */
std::string Hamburguesa::get_queso() {
    return queso;
}

/**
 * get_verdura devuelve el tipo de verduras de la hamburguesa.
 *
 * @return tipo de verduras de la hamburguesa.
 */
std::string Hamburguesa::get_verdura() {
    return verduras;
}

/**
 * get_salsa devuelve el tipo de salsa de la hamburguesa.
 *
 * @return tipo de salsa de la hamburguesa.
 */
std::string Hamburguesa::get_salsa() {
    return salsa;
}

/**
 * set_queso asigna un nuevo tipo de queso a la hamburguesa.
 *
 * @param n_queso nuevo tipo de queso de la hamburguesa.
 */
void Hamburguesa::set_queso(std::string n_queso) {
    queso = n_queso;
}

/**
 * set_verdura asigna un nuevo tipo de verduras a la hamburguesa.
 *
 * @param n_verdura nuevo tipo de verduras de la hamburguesa.
 */
void Hamburguesa::set_verdura(std::string n_verdura) {
    verduras = n_verdura;
}

/**
 * set_salsa asigna un nuevo tipo de salsa a la hamburguesa.
 *
 * @param n_salsa nuevo tipo de salsa de la hamburguesa.
 */
void Hamburguesa::set_salsa(std::string n_salsa) {
    salsa = n_salsa;
}

/**
 * to_string convierte los atributos en una cadena de texto.
 *
 * @return cadena de texto con los valores y texto concatenado.
 */
std::string Hamburguesa::to_string() {
    std::stringstream aux;
    aux << "queso: " << queso << " verduras: " << verduras << " salsa: " << salsa << std::endl;
    return aux.str();
}

#endif