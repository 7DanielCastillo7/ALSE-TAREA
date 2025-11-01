#include "Usuario.h"
#include <iostream> 
using namespace std;

Usuario::Usuario(const string& nombre) : nombreUsuario(nombre) {
cout << "Usuario creado: " << nombreUsuario << endl;
}

void Usuario::agregarCompraAlHistorial(const CarritoCompras& carrito) {
    
    if (carrito.calcularTotal() > 0) {
        
        historialCompras.push_back(CompraHistorial( std::vector<ItemCarrito>(carrito.getItems()), carrito.calcularTotal() ));
    cout << "Compra de " << carrito.calcularTotal() << " agregada en el historial." <<endl;

    }
}