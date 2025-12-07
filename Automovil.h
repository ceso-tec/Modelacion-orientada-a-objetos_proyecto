#pragma once
#include <iostream>

using namespace std;   

// Clase abstracta Automovil que representa las caracteristicas fundamentales de un vehiculo.
// Contiene informacion de marca, modelo y anio.
// Cesar Ricardo Rosales Ramirez A01715405
// Fecha de creacion 15 de Noviembre

class Automovil {
    protected:
        string marca;
        string modelo;
        int anio;
    public:

// Constructor por omision que inicializa los atributos de marca, modelo y anio a valores predeterminados.
// No recibe parametros y no retorna valor.
    Automovil() {
        marca = "";
        modelo = "";
        anio = 0.0;
    }
    
// Constructor por parametros que inicializa los atributos de marca, modelo y anio, no retorna valor.
    Automovil(string _marca, string _modelo, int _anio){
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
    }

// Getters. Retornan los valores de los atributos de la clase Automovil, no reciben parametros.
    string getMarca(){
        return marca;
    }
    string getModelo(){
        return modelo;
    }
    int getAnio(){
        return anio;
    }

// Setters. Establecen los valores de los atributos de la clase Automovil, reciben un parametro y no retornan valor.
    void setMarca(string _marca){
        marca = _marca;
    }
    void setModelo(string _modelo){
        modelo = _modelo;
    }
    void setAnio(int _anio){
        anio = _anio;
    }

// Metodos virtuales puros que deben ser implementados por las clases derivadas para mostrar la informacion especifica y calcular tarifas.
// La implentacion es obligatoria en las clases hijas.
// No reciben parametros y no retornan valor.
    virtual void calcularTarifa() = 0;
    virtual void mostrarInfo() = 0;

};