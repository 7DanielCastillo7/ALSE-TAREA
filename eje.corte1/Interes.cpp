#include <iostream>
#include <cmath>

int main(){
    double A,P,r,n,t;
    std::cout << "Calculo de Interes compuesto" << std::endl;
    std::cout << "¿Cual es lacantidad inicial invertida? ";
    std::cin >> P;
    std::cout << "¿Cual es la taza de interes anual (en decimal)? ";
    std::cin >> r;
    std::cout << "¿Cuantas veces se aplica el interes al año? ";
    std::cin>> n;
    std::cout << "¿Cual es el numero de años? ";
    std::cin >> t;
    A = P * pow(1+r/n,n*t);
    std::cout << "El monto final obtenido es: " << A << std::endl;
    return 0;


}