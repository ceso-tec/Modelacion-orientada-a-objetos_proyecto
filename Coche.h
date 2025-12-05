#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

// Implementacion de herencia
class Coche :public Automovil {
private:
    string color;

public:
// Constructor por omision
    Coche() : Automovil() {
        color = "";
    }

// Constructor por parametros
    Coche(string _marca, string _modelo, int _anio, string _color) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        color = _color;
    }

// Getters
    string get_marca() {
        return marca;
    }
    string get_modelo() {
        return modelo;
    }
    int get_anio() {
        return anio;
    }
    string get_color() const {
        return color;
    }

// Setters 
    void set_marca(string _marca) {
        marca = _marca;
    }
    void set_modelo(string _modelo) {
        modelo = _modelo;
    }
    void set_anio(int _anio) {
        anio = _anio;
    }
    void set_color(string _color) {
        color = _color;
    }
  
// Metodo para calcular la tarifa del coche
    void calcularTarifa() override {
        double tarifa = 50.0; // Tarifa base para coches
        cout << "La tarifa del coche es: $" << tarifa << endl;
    }

// Metodo para mostrar informacion del coche
    void mostrarInfo() override {
        cout << "Color: " << color << endl;    
    }

};