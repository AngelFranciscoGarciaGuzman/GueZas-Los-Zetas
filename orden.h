#include<string>
#include<sstream>
#include"hamburguesas.h"
#include"malteadas.h"
#include"papas.h"
#ifndef ORDEN_H_
#define ORDEN_H_

class Orden{

    //Crear clase "Orden" que tiene como parametros las hamburguesas, malteadas y papas. 
    private:
        Hamburguesa * hamburguesas[4];
        Malteada * malteadas[4];
        Papas * papas[4]; 

    public:
        Orden(){};

        void agrega_hamburguesa(Articulo *hamburguesa, int);
        void agrega_malteada(Articulo *Malteada, int);
        void agrega_papas(Articulo *papa, int);

        //Un to_string() de toda la orden y recolecta el precio para mostrarlo al usuario
        std::string estatus_orden();

        void asignar_precio_h(float, int);
        void asignar_precio_m(float, int);
        void asignar_precio_p(float, int);

};


/**
 * agrega_hamburguesa agrega una hamburguesa a la orden.
 *
 * Crea un objeto de tipo Hamburguesa con los valores proporcionados y lo guarda en el array de hamburguesas de la orden en la posición especificada.
 *
 * @param hamburguesa puntero al objeto de tipo Articulo que representa la hamburguesa
 * @param posicion posición en el array donde se guarda la hamburguesa
 * @return void
 */
void Orden::agrega_hamburguesa(Articulo *hamburguesa, int posicion) {
    hamburguesas[posicion] = static_cast<Hamburguesa*>(hamburguesa);
}

/**
 * agrega_malteada agrega una malteada a la orden.
 *
 * Crea un objeto de tipo Malteada con los valores proporcionados y lo guarda en el array de malteadas de la orden en la posición especificada.
 *
 * @param malteada puntero al objeto de tipo Articulo que representa la malteada
 * @param posicion posición en el array donde se guarda la malteada
 * @return void
 */
void Orden::agrega_malteada(Articulo *malteada, int posicion) {
    malteadas[posicion] = static_cast<Malteada*>(malteada);
}

/**
 * agrega_papas agrega una orden de papas a la orden.
 *
 * Crea un objeto de tipo Papas con los valores proporcionados y lo guarda en el array de papas de la orden en la posición especificada.
 *
 * @param papa puntero al objeto de tipo Articulo que representa la orden de papas
 * @param posicion posición en el array donde se guarda la orden de papas
 * @return void
 */
void Orden::agrega_papas(Articulo *papa, int posicion) {
    papas[posicion] = static_cast<Papas*>(papa);
}

/**
 * asignar_precio_h asigna el precio a una hamburguesa en la orden.
 *
 * Asigna el precio proporcionado a la hamburguesa en el array de hamburguesas de la orden en la posición especificada.
 *
 * @param precio precio de la hamburguesa
 * @param posicion posición en el array de la hamburguesa a la que se asigna el precio
 * @return void
 */
void Orden::asignar_precio_h(float precio, int posicion){
    hamburguesas[posicion] -> set_precio(precio);
}

/**
 * asignar_precio_m asigna el precio a una malteada en la orden.
 *
 * Asigna el precio proporcionado a la malteada en el array de malteadas de la orden en la posición especificada.
 *
 * @param precio precio de la malteada
 * @param posicion posición en el array de la malteada a la que se asigna el precio
 * @return void
 */
void Orden::asignar_precio_m(float precio, int posicion){
    malteadas[posicion] -> set_precio(precio);
}

/**
 * asignar_precio_p asigna el precio a una orden de papas en la orden.
 *
 * Asigna el precio proporcionado a la orden de papas en el array de papas de la orden en la posición especificada.
 *
 * @param precio precio de la orden de papas
 * @param posicion posición en el array de la orden de papas a la que se asigna el precio
 * @return void
 */
void Orden::asignar_precio_p(float precio, int posicion){
    papas[posicion] -> set_precio(precio);
}


/**
 * estatus_orden devuelve el estado de la orden en forma de string.
 *
 * Calcula el precio total acumulando los precios de todas las hamburguesas, malteadas y papas en la orden.
 * Luego, crea un stringstream para construir el string del estado de la orden, concatenando información de cada elemento de la orden.
 *
 * @param
 * @return string con el estado de la orden
 */
std::string Orden::estatus_orden(){
    float acum = 0;
    for(int i = 0 ; i < 4 ; i++){

        acum = acum + hamburguesas[i] -> get_precio();
        acum = acum + malteadas[i] -> get_precio();
        acum = acum + papas[i] -> get_precio();
    }

    std::stringstream aux;
    
    for(int i = 0 ; i < 4 ; i++){
        aux << "hamburguesa: " << i+1 << " " << hamburguesas[i]->to_string() << std::endl;
    }

    for(int i = 0 ; i < 4 ; i++){
        aux << "malteada: " << i+1 << " " << malteadas[i]->to_string() << std::endl;
    }

    for(int i = 0 ; i < 4 ; i++){
        aux << "papas: " << i+1 << " " << papas[i]->to_string() << std::endl;
    }

    aux << "total a pagar: " << acum;

    return aux.str();

    }



#endif