#include <string>

#ifndef PRECIO_H_
#define PRECIO_H_

class Articulo {
protected:
    float precio;
    float promocion;

public:
    // Constructor por defecto de Articulo
    Articulo() : precio(0), promocion(0) {};

    // Constructor con parámetros definidos
    Articulo(float pre, float pro) : precio(pre), promocion(pro) {};

    // Funciones get para obtener los valores de los atributos
    float get_precio();

    // Funciones set para asignar nuevos valores a los atributos
    void set_precio(float);
    void set_promo(float);

    // Función puramente virtual para convertir el artículo en una cadena de texto
    virtual std::string to_string() = 0;
};

/**
 * set_precio establece el precio del artículo y aplica la promoción si está configurada.
 *
 * @param n_precio precio del artículo
 * @return void
 */
void Articulo::set_precio(float n_precio){
    precio = n_precio;
    precio = precio - (precio * promocion);
}

/**
 * set_promo establece la promoción del artículo.
 *
 * @param n_promo porcentaje de promoción
 * @return void
 */
void Articulo::set_promo(float n_promo){
    promocion = n_promo;
}

/**
 * get_precio devuelve el precio del artículo.
 *
 * @return precio del artículo.
 */
float Articulo::get_precio() {
    return precio;
}

#endif