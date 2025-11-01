#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include <iostream>
#include "Producto.h"  
using namespace std;


 class ItemCarrito {
    private:
    Producto producto; 
    int cantidad;

    public: 
    ItemCarrito(const Producto& prod, int cant) : producto(prod), cantidad(cant) {}
    Producto _producto() const { return producto; }
    int _cantidad() const { return cantidad; }
    double subtotal() const { return producto._precio() * cantidad; }
    void setCantidad(int cant) { cantidad = cant; }
 };
 #endif 