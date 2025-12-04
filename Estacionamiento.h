#pragma once
#include <iostream>
#include <list>
#include <string>

#include "Automovil.h"

using namespace std;

class Estacionamiento {
private:
    list<Automovil*> listaAutomoviles;
    string propietario;
    
public:
// Constructor por omision
    Estacionamiento() {
        propietario = "";
    }

// Constructor por parametros
    Estacionamiento(string _propietario) {
        propietario = _propietario;
    }

    ~Estacionamiento() {
        listaAutomoviles.clear();
    }

// Getters
    list<Automovil*> get_listaAutomoviles() {
        return listaAutomoviles;
    }
    string get_propietario() {
        return propietario;
    }
// Setters
    void set_propietario(string _propietario) {
        propietario = _propietario;
    }

// Metodo para agregar un automovil al estacionamiento
    void agregarAutomovil(Automovil* AutoNuevo){
        listaAutomoviles.push_back(AutoNuevo);
    }

// Metodo para mostrar los automoviles en el estacionamiento
    void mostrarAutomoviles() {
        cout << "Nombre del estacionamiento: " << propietario << endl;
        cout << "Lista de Automoviles en el Estacionamiento:" << endl;
        for (Automovil* autoPtr : listaAutomoviles) {
            cout << "- " << autoPtr->get_marca() << " " << autoPtr->get_modelo() << " (" << autoPtr->get_anio() << ")" << endl;
        }
    }
    
    void encenderTodos() {
        for (Automovil* autoPtr : listaAutomoviles) {
            autoPtr->encender();
        }
    }
    void apagarTodos() {
        for (Automovil* autoPtr : listaAutomoviles) {
            autoPtr->apagar();
        }
    }
    
};
