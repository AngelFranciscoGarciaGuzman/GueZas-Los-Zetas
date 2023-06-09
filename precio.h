#include<string>
#ifndef PRECIO_H_
#define PRECIO_H_

class Articulo{
protected:

    float precio;
    float promocion;

public:

    Articulo(): precio(0), promocion(0){};
    Articulo(float pre, float pro):precio(pre), promocion(pro){};

    float get_precio();
    float get_promo();

    virtual void set_precio(float ) = 0;
    virtual void set_promo(float );
    
    /**
     * to_string devuelve una representación en cadena del artículo.
     *
     * @return std::string representación en cadena del artículo
     */
    virtual std::string to_string() = 0;

};

float Articulo::get_precio(){
    return precio;
}


float Articulo::get_promo(){
    return promocion;
}

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

#endif