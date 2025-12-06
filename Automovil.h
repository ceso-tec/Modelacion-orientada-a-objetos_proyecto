#pragma once
#include <iostream>

using namespace std;   
// Clase base abstracta
class Automovil {
    protected:
        string marca;
        string modelo;
        int anio;
    public:

// Constructor por omision
    Automovil() {
        marca = "";
        modelo = "";
        anio = 0;
    }
    
// Constructor por parametros
    Automovil(string _marca, string _modelo, int _anio){
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
    }

// Getters
    string get_marca(){
        return marca;
    }
    string get_modelo(){
        return modelo;
    }
    int get_anio(){
        return anio;
    }

// Setters
    void set_marca(string _marca){
        marca = _marca;
    }
    void set_modelo(string _modelo){
        modelo = _modelo;
    }
    void set_anio(int _anio){
        anio = _anio;
    }

// Metodos abstracto implementados en las clases hijas
    virtual void calcularTarifa() = 0;
    virtual void mostrarInfo() = 0;

};