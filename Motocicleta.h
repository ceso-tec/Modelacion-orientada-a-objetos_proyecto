#pragma once
#include <iostream>
#include <string>
#include "Automovil.h"

using namespace std;

class Motocicleta: public Automovil {
private:
    int cilindrada;
    bool encendido;

public:
// Constructor por omision
    Motocicleta() {
        cilindrada = 0;
        encendido = false;
    }
    
// Constructor por parametros
    Motocicleta(string _marca, string _modelo, int _anio, int _cilindrada) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;    
        cilindrada = _cilindrada;
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
    int get_cilindrada() const {
        return cilindrada;
    }
    bool is_encendido() const {
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
    void set_cilindrada(int _cilindrada) {
        cilindrada = _cilindrada;
    }

// Metodo para encender la motocicleta
    void encender() override {
        if (!encendido) {
            encendido = true;
            cout << "La motocicleta ha sido encendido." << endl;
        } else {
            cout << "La motocicleta ya estaba encendido." << endl;
        }
    }

// Metodo para apagar la motocicleta
    void apagar() override {
        if (encendido) {
            encendido = false;
            cout << "La motocicleta ha sido apagado." << endl;
        } else {
            cout << "La motocicleta ya estaba apagado." << endl;
        }
    } 

};