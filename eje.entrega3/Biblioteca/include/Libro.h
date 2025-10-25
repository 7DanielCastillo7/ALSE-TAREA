#ifndef Libro
#define Libro

#include <iostream> 
#include <string> 
using namespace std;

//definicion de la clase Libro
class Libro {
    private: 
    //definicion de variables
    string titulo;
    string autor;
    string ISBN;
    bool disponible;
    public:
    Libro(const string& t, const string& a, const string& i);
    string Titulo() const;
    string Autor() const;
    string Isbn() const;
    bool Disponible() const;
    void SetDisponible (bool d);
    void Mostrar() const;

    #endif


};


 

