#include <iostream>

#include "Estacionamiento.h"
#include "Coche.h"
#include "Camion.h"
#include "Motocicleta.h"

using namespace std;
int main() {
// Crear instancia de Coche
    Coche* miCoche = new Coche("Toyota", "Corolla", 2020, "Rojo");

// Crear instancia de Camion
    Camion* miCamion = new Camion("Volvo", "FH16", 2020, 15);

// Crear instancia de Motocicleta
    Motocicleta* miMoto = new Motocicleta("Honda","Forza 750", 2025, 745);

// Crear instancia de Estacionamiento 
    Estacionamiento miEstacionamiento("Estacionamiento Central");

// Agregagacion de automoviles al estacionamiento
    miEstacionamiento.agregarAutomovil(miCoche);
    miEstacionamiento.agregarAutomovil(miCamion);
    miEstacionamiento.agregarAutomovil(miMoto);

// Mostrar los automoviles en el estacionamiento
    miEstacionamiento.mostrarAutomoviles();
    miEstacionamiento.calcularTarifasTotales();
    return 0;
};