#include <iostream>
#include <string>

#include "Producto.h"
#include "ItemCarrito.h" 
#include "CarritoCompras.h"  
#include "Usuario.h" 
#include <iomanip>

using namespace std;

void mostrarCarrito(const CarritoCompras& carrito) {
    cout << "\n--- Contenido del Carrito ---" << endl;
    for (const auto& item : carrito.getItems()) {
        cout << item._producto()._nombre() << " - Cantidad: " << item._cantidad()
             << " - Subtotal: $" << fixed << setprecision(2) << item.subtotal() << endl;
    }
    cout << endl;
    cout << endl; 
};

int main(){
    cout << "--- 1. Inicialización de Productos y Usuario ---" << endl;
    Producto p_laptop("Laptop X", 1250.00, 10);
    Producto p_mouse("Mouse Optico", 25.50, 50);
    Producto p_teclado("Teclado Mec", 75.99, 20);

    string nombre;
    cout << "Nombre del usuario: ";
    cin >> nombre;
    Usuario usuario(nombre);
    CarritoCompras carrito_usuario;
    cout << "------------------------------------------------" << endl;

    cout << "\n--- 2. Agregando Productos al Carrito ---" << endl;
    carrito_usuario.agregarproductos(p_laptop, 1);
    carrito_usuario.agregarproductos(p_mouse, 3);
    carrito_usuario.agregarproductos(p_teclado, 1);
    
    carrito_usuario.agregarproductos(p_mouse, 2);
    
    mostrarCarrito(carrito_usuario);

    cout << "\n--- 3. Eliminando un Producto (Teclado Mec) ---" << endl;
    carrito_usuario.eliminarproducto("Teclado Mec"); 
    
    mostrarCarrito(carrito_usuario);

    cout << "\n--- 4. Finalizando Compra y Guardando Historial ---" << endl;
    double total_compra_1 = carrito_usuario.calcularTotal();
    cout << "Total a pagar: " << fixed << setprecision(2) << total_compra_1 << endl;
    
    usuario.agregarCompraAlHistorial(carrito_usuario);
    
    carrito_usuario.vaciarCarrito();
    mostrarCarrito(carrito_usuario);
    
    cout << "\n--- 5. Verificando Historial de Compras de " << usuario._nombreUsuario() << " ---" << endl;
    const auto& historial = usuario._historialcompras();
    
    if (!historial.empty()) {
        cout << "Compras registradas: " << historial.size() << endl;
    }    

    cout << "\n--- Fin del programa ---" << endl;
    
    return 0;
}  


