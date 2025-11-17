#include <iostream>
#include "Coche.h"
#include "Camion.h"
#include "Motocicleta.h"

using namespace std;
int main() {
    // Crear instancia de Coche
    Coche miCoche("Toyota", "Corolla", 2020);
    cout << "Coche: " << miCoche.getMarcaModelo() << ", Año: " << miCoche.getAnio() << ", Estado: " << miCoche.getEstado() << endl;
    miCoche.encender();
    cout << "Estado después de encender: " << miCoche.getEstado() << endl;
    miCoche.apagar();
    cout << "Estado después de apagar: " << miCoche.getEstado() << endl;

    cout << "------------------------" << endl;

    // Crear instancia de Camion
    Camion miCamion("Volvo", 15);
    cout << "Camión: " << miCamion.getCapacidadCarga() << " toneladas" << endl;
    cout << "Marca: " << miCamion.getMarca() << endl;
    miCamion.cargar();
    miCamion.descargar();

    cout << "------------------------" << endl;

    // Crear instancia de Motocicleta
    Motocicleta miMoto("Honda", 600);
    cout << "Motocicleta: " << miMoto.getCilindrada() << " cc" << endl;
    cout << "Marca: " << miMoto.getMarca() << endl;
    miMoto.ponerCasco();
    miMoto.quitarCasco();

    return 0;
}