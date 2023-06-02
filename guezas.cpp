#include<iostream>
#include<string>

//Incluir archivos de encabezados
#include"hamburguesas.h"
#include"malteadas.h"
#include"papas.h"
#include"orden.h"

std::string none;

int main() {

    Orden orden;
    Hamburguesa* hamburguesa1 = new Hamburguesa();

    hamburguesa1->set_promo(0.10);
    hamburguesa1->set_precio(100);

    Malteada* malteada1 = new Malteada();

    malteada1->set_promo(0.10);
    malteada1->set_precio(100);

    Papas* papas1 = new Papas();

    papas1->set_promo(0.10);
    papas1->set_precio(100);
    
    orden.agrega_hamburguesa(hamburguesa1, 0);
    orden.agrega_malteada(malteada1, 0);
    orden.agrega_papas(papas1, 0);

    std::cout << "Estado de la orden:\n";
    std::cout << orden.estatus_orden() << "\n";

    delete hamburguesa1;
    return 0;
}






