#pragma once
#include <iostream>
#include <list>
#include <string>

#include "Automovil.h"

using namespace std;

// Representa la clase Estacionamiento que gestiona una coleccion de Automoviles.

class Estacionamiento {
private:
    list<Automovil*> listaAutomoviles;
    string nombreEstacionamiento;
    
public:
// Constructor por omision que inicializa el nombre del estacionamiento a una cadena vacia.
    Estacionamiento() {
        nombreEstacionamiento = "";
    }

// Constructor por parametros que inicializa el nombre del estacionamiento, no retorna valor.
    Estacionamiento(string _nombreEstacionamiento) {
        nombreEstacionamiento = _nombreEstacionamiento;
    }

// Retorna la lista de automoviles en el estacionamiento, no recibe parametros.
    list<Automovil*> getListaAutomoviles() {
        return listaAutomoviles;
    }
// Retorna el nombre del estacionamiento, no recibe parametros.
    string getNombreEstacionamientoo() {
        return nombreEstacionamiento;
    }

// Establece el nombre del estacionamiento, recibe un parametro y no retorna valor.
    void setNombreEstacionamiento(string _nombreEstacionamiento) {
        nombreEstacionamiento = _nombreEstacionamiento;
    }

// Agrega un nuevo automovil al estacionamiento, recibe AutoNuevo como parametro y no retorna valor.
    void agregarAutomovil(Automovil* autoNuevo){
        listaAutomoviles.push_back(autoNuevo);
    }

// Muestra la informacion general y especifica de los automoviles en el estacionamiento, asi como la cantidad total de vehiculos en el mismo.
// No recibe parametros y no retorna valor.
    void mostrarAutomoviles() {
        cout << "Nombre del estacionamiento: " << nombreEstacionamiento << endl;
        cout << "Cantidad de automoviles en el estacionamiento: " << listaAutomoviles.size() << endl;
        cout << "Lista de automoviles en el estacionamiento y sus caracteristicas especificas:" << endl;
        for (Automovil* autoPtr : listaAutomoviles) {
            cout << "- " << autoPtr->getMarca() << " " << autoPtr->getModelo() << " " << autoPtr->getAnio() << endl;
        autoPtr->mostrarInfo();
        }
    }

// Calcula e imprime las tarifas totales de todos los automoviles en el estacionamiento.
// No recibe parametros y no retorna valor.
    void calcularTarifasTotales() {
        cout << "Generando reporte de tarifas por tipo de automovil " << endl;
        for (Automovil* autoPtr : listaAutomoviles) {
            autoPtr->calcularTarifa();
        }
    }

};