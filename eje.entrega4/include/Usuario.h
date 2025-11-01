#ifndef USUARIO_H
#define USUARIO_H
#include <iostream> 
#include <string>
#include <vector>
#include "ItemCarrito.h" 
#include "CarritoCompras.h"
using namespace std; 

struct CompraHistorial {
    vector<ItemCarrito> productosComprados;
    double totalPagado;
    CompraHistorial(const vector<ItemCarrito>& items, double total)
        : productosComprados(items), totalPagado(total) {}
};
class Usuario {
private:
    string nombreUsuario;
    vector<CompraHistorial> historialCompras;

public:
    Usuario(const string& nombre); 
    
    string _nombreUsuario() const { return nombreUsuario; }
    const vector<CompraHistorial>& _historialcompras() const { return historialCompras; }
    void agregarCompraAlHistorial(const CarritoCompras& carrito);
};

#endif