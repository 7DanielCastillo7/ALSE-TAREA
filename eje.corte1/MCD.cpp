// Programa que calcula el maximo comun divisor (MCD) de dos numeros.
#include <iostream>

int main(){
    int a, b,c, mcd;
    std::cout << "Calculo del maximo comun divisor (MCD) de dos numeros" << std::endl;
    std::cout << "Ingrese el primer numero:";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero:";
    std::cin >> b;
    while(c < a && c < b){
        c++;
        if(a % c == 0 && b % c == 0){
            mcd = c;
        }

    }
    std::cout << "El MCD es: " << mcd << std::endl;
    return 0;


}