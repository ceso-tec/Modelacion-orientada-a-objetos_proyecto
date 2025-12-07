#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

// Representa la clase Camion que hereda caracteristicas generales de Automovil.
// Cesar Ricardo Rosales Ramirez A01715405
// Fecha de creacion 15 de Noviembre

class Camion : public Automovil {
private:
// Atributo especifico de la clase Camion
    int capacidadCarga; // en toneladas

public:
// Constructor por omision que inicializa la capacidad de carga a 0, no recibe parametros y no retorna valor.
    Camion() : Automovil() {
        capacidadCarga = 0.0;
    }

// Constructor por parametros, inicializa los atributos marca, modelo, anio y capacidadCarga, no retorna valor.
    Camion(string _marca, string _modelo, int _anio, int _capacidadCarga) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        capacidadCarga = _capacidadCarga; 
    }

// Retorna la capacidad de carga del camion, no recibe parametros.
    int getCapacidadCarga() const {
        return capacidadCarga;
    }
    
// Establece la capacidad de carga del camion, recibe un parametro y no retorna valor.
    void setCapacidadCarga(int _capacidadCarga) {
        capacidadCarga = _capacidadCarga;
    }

// Calcula e imprime la tarifa base para un camion, no recibe parametros y no retorna valor.
    void calcularTarifa() override {
        double tarifa = 140.0; 
        cout << "La tarifa del camion es: $" << tarifa << endl;
    }

// Muestra la informacion especifica del camion, no recibe parametros y no retorna valor.
    void mostrarInfo() override {
        cout << "Capacidad de carga: " << capacidadCarga << " Toneladas" << endl;    
    }

};