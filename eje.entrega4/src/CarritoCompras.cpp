#include "CarritoCompras.h" 
#include <algorithm>



void CarritoCompras::agregarproductos(const Producto& prod, int cant) {
    for (auto& item : ingresado) {
        if (item._producto()._nombre() == prod._nombre()) {
            item.setCantidad(item._cantidad() + cant);
            return;
        }
    }
    ingresado.push_back(ItemCarrito(prod , cant));
}    

    void CarritoCompras::eliminarproducto(const string& nombreProd) {
        auto it = remove_if(ingresado.begin(), ingresado.end(),[&](const ItemCarrito& item) {
            return item._producto()._nombre() == nombreProd;
        });
        ingresado.erase(it , ingresado.end());  
    }
    double CarritoCompras::calcularTotal() const {
        double total = 0.0; 
        for (const auto& item : ingresado) {
            total += item.subtotal(); 
        }
        return total;
    }