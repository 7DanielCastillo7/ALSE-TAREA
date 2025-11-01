#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std; 

class Producto {
    private:
    string nombre;
    double precio;
    int stock;
    public:
    Producto(string nombre, double precio, int stock);
    string _nombre() const { return nombre; }
    double _precio() const { return precio; }
    int _stock() const { return stock;}

    void setStock(int nuevoStock) { stock = nuevoStock; }

};
#endif  