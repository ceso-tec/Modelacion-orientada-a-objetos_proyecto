#pragma once
#include <iostream>
#include <list>
#include <string>

#include "Automovil.h"

using namespace std;

// Clase Estacionamiento que contiene una lista de punteros a Automovil
class Estacionamiento {
private:
    list<Automovil*> listaAutomoviles;
    string nombreEstacionamiento;
    
public:
// Constructor por omision
    Estacionamiento() {
        nombreEstacionamiento = "";
    }

// Constructor por parametros
    Estacionamiento(string _nombreEstacionamiento) {
        nombreEstacionamiento = _nombreEstacionamiento;
    }

// Getters
    list<Automovil*> get_listaAutomoviles() {
        return listaAutomoviles;
    }
    string get_nombreEstacionamientoo() {
        return nombreEstacionamiento;
    }

// Setters
    void set_nombreEstacionamiento(string _nombreEstacionamiento) {
        nombreEstacionamiento = _nombreEstacionamiento;
    }

// Metodo para agregar un automovil al estacionamiento
    void agregarAutomovil(Automovil* AutoNuevo){
        listaAutomoviles.push_back(AutoNuevo);
    }

// Metodo para mostrar los automoviles en el estacionamiento
    void mostrarAutomoviles() {
        cout << "Nombre del estacionamiento: " << nombreEstacionamiento << endl;
        cout << "Cantidad de automoviles en el estacionamiento: " << listaAutomoviles.size() << endl;
        cout << "Lista de automoviles en el estacionamiento y sus caracteristicas especificas:" << endl;
        for (Automovil* autoPtr : listaAutomoviles) {
            cout << "- " << autoPtr->get_marca() << " " << autoPtr->get_modelo() << " " << autoPtr->get_anio() << endl;
        autoPtr->mostrarInfo();
        }
    }

// Metodo para calcular las tarifas totales de los automoviles en el estacionamiento
    void calcularTarifasTotales() {
        cout << "Generando reporte de tarifas por tipo de automovil " << endl;
        for (Automovil* autoPtr : listaAutomoviles) {
            autoPtr->calcularTarifa();
        }
    }

};