#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include "ItemCarrito.h"
#include <vector>
#include <string>

using namespace std; 
class CarritoCompras {
    private:
    vector<ItemCarrito> ingresado;
    public:
    void agregarproductos(const Producto& prod, int cant);
    

    void eliminarproducto(const string& nombreProd);

    double calcularTotal() const;

    const vector<ItemCarrito>& getItems() const { return ingresado;}
    
    void vaciarCarrito() {ingresado.clear();}

};
#endif 

