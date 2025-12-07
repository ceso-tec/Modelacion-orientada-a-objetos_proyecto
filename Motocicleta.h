#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

// Representa la clase Motocicleta que hereda caracteristicas generales de Automovil.
// Cesar Ricardo Rosales Ramirez A01715405
// Fecha de creacion 15 de Noviembre

class Motocicleta: public Automovil {
private:
// Atributo especifico de la clase Motocicleta
    int cilindrada;

public:
// Constructor por omision que inicializa la cilindrada a 0, no recibe parametros y no retorna valor.
    Motocicleta() {
        cilindrada = 0.0;
    }
    
// Constructor por parametros, inicializa los atributos marca, modelo, anio y cilindrada, no retorna valor.
    Motocicleta(string _marca, string _modelo, int _anio, int _cilindrada) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;    
        cilindrada = _cilindrada;
    }

// Retorna la cilindrada de la motocicleta, no recibe parametros. 
    int getCilindrada() const {
        return cilindrada;
    }

// Establece la cilindrada de la motocicleta, recibe un parametro y no retorna valor.
    void setCilindrada(int _cilindrada) {
        cilindrada = _cilindrada;
    }

// Calcula e imprime la tarifa base para una motocicleta, no recibe parametros y no retorna valor.
    void calcularTarifa() override {
        double tarifa = 25.0;
        cout << "La tarifa de la motocicleta es: $" << tarifa << endl;
    }

// Muestra la informacion especifica de la motocicleta, no recibe parametros y no retorna valor.
    void mostrarInfo() override {
        cout << "Cilindrada: " << cilindrada << "cc" << endl;    
    }

};