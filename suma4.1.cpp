/*
Escribe un programa que declare un arreglo de 5 enteros y calcule la suma de todos sus elementos.
*/
#include<iostream>

int main(){

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    std::cout<< "Suma de 5 numeros enteros" << std::endl;
    std::cout<< "Ingrese el primer valor:";
    std::cin>> num1;
    std::cout<< "Ingrese el segundo valor:";
    std::cin>> num2;
    std::cout<< "Ingrese el tercer valor:";
    std::cin>> num3;
    std::cout<< "Ingrese el cuarto valor:";
    std::cin>> num4;
    std::cout<< "Ingrese el quinto valor:";
    std::cin>> num5;
    int suma = num1 + num2 + num3 + num4 + num5;
    std::cout<< "El resultado de la suma de los 5 numeros ingresados es: " << suma << std::endl;
    return 0;

}