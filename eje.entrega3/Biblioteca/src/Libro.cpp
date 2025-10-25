#include "Libro.h"
#include <iostream>

Libro::Libro(const string& t, const string& a, const string& i) 
    : titulo(t), autor(a), ISBN(i), disponible(true) {}

    string Libro::Titulo() const {
        return titulo;
    }

    string Libro::Autor() const {
        return autor;
    }

    string Libro::Isbn() const {
        return ISBN;
    }

    bool Libro::Disponible() const {
        return disponible;
    }

    void Libro:: SetDisponible (bool d) {
        disponible = d;
    }

    void Libro:: Mostrar() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Disponible: " << (disponible ? "Si" : "No") << endl;
        
    }