#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

class Motocicleta: public Automovil {
private:
    int cilindrada;

public:
// Constructor por omision
    Motocicleta() {
        cilindrada = 0;
    }
    
// Constructor por parametros
    Motocicleta(string _marca, string _modelo, int _anio, int _cilindrada) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;    
        cilindrada = _cilindrada;
    }

// Getters
    int get_cilindrada() const {
        return cilindrada;
    }

// Setters 
    void set_cilindrada(int _cilindrada) {
        cilindrada = _cilindrada;
    }

// Metodo para calcular la tarifa del motocicleta
    void calcularTarifa() override {
        double tarifa = 25.0; // Tarifa base para motocicletas
        cout << "La tarifa de la motocicleta es: $" << tarifa << endl;
    }

// Metodo para mostrar informacion de la motocicleta
    void mostrarInfo() override {
        cout << "Cilindrada: " << cilindrada << "cc" << endl;    
    }

};