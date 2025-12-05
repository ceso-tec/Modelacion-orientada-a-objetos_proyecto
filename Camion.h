#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

class Camion : public Automovil {
private:
    int capacidadCarga; // en toneladas

public:
// Constructor por omision
    Camion() : Automovil() {
        capacidadCarga = 0;
    }

// Constructor por parametros
    Camion(string _marca, string _modelo, int _anio, int _capacidadCarga) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        capacidadCarga = _capacidadCarga; 
    }

// Getters
    int get_capacidadCarga() const {
        return capacidadCarga;
    }
    
// Setters
    void set_capacidadCarga(int _capacidadCarga) {
        capacidadCarga = _capacidadCarga;
    }

// Metodo para calcular la tarifa del camion
    void calcularTarifa() override {
        double tarifa = 140.0; // Tarifa base para camiones
        cout << "La tarifa del camion es: $" << tarifa << endl;
    }

// Metodo para mostrar informacion de la motocicleta
    void mostrarInfo() override {
        cout << "Capacidad de carga: " << capacidadCarga << " Toneladas" << endl;    
    }

};