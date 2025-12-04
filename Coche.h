#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

// Implementacion de herencia
class Coche :public Automovil {
private:
    bool encendido;

public:
// Constructor por omision
    Coche() : Automovil() {
        encendido = false;
    }

// Constructor por parametros
    Coche(string _marca, string _modelo, int _anio) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        encendido = false;  
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
    bool is_encendido() {
        return encendido;
    }
    string get_estado() const{
        return encendido ? "Encendido" : "Apagado";
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
  
// Metodo para encender el coche
    void encender() override {
        if (!encendido) {
            encendido = true;
            cout << "El coche ha sido encendido." << endl;
        } else {
            cout << "El coche ya estaba encendido." << endl;
        }
    }

// Metodo para apagar el coche
    void apagar() override {
        if (encendido) {
            encendido = false;
            cout << "El coche ha sido apagado." << endl;
        } else {
            cout << "El coche ya estaba apagado." << endl;
        }
    } 

};