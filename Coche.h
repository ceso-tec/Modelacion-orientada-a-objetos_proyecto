#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

// Representa la clase Coche que hereda caracteristicas generales de Automovil.
// Cesar Ricardo Rosales Ramirez A01715405
// Fecha de creacion 15 de Noviembre

class Coche :public Automovil {
private:
// Atributo especifico de la clase Coche
    string color;

public:
// Constructor por omision que inicializa el color a una cadena vacia, no recibe parametros y no retorna valor.
    Coche() : Automovil() {
        color = "";
    }

// Constructor por parametros que inicializa los atributos marca, modelo, anio y color, no retorna valor.
    Coche(string _marca, string _modelo, int _anio, string _color) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        color = _color;
    }

// Retorna el color del coche, no recibe parametros.
    string getColor() const {
        return color;
    }

// Establece el color del coche, recibe un parametro y no retorna valor.
    void setColor(string _color) {
        color = _color;
    }
  
// Calcula e imprime la tarifa base para un coche, no recibe parametros y no retorna valor.
    void calcularTarifa() override {
        double tarifa = 50.0; 
        cout << "La tarifa del coche es: $" << tarifa << endl;
    }

// Muestra la informacion especifica del coche, no recibe parametros y no retorna valor.
    void mostrarInfo() override {
        cout << "Color: " << color << endl;    
    }

};