#include <iostream>
#include "Coche.h"
#include "Camion.h"
#include "Motocicleta.h"

using namespace std;
int main() {
    // Crear instancia de Coche
    Coche miCoche("Toyota", "Corolla", 2020);
    cout << "Coche: " << miCoche.get_modelo() << ", Año: " << miCoche.get_anio() << ", Estado: " << miCoche.get_estado() << endl;
    cout << "Marca: " << miCoche.get_marca() << endl;
    miCoche.encender();
    cout << "Estado después de encender: " << miCoche.get_estado() << endl;
    miCoche.apagar();
    cout << "Estado después de apagar: " << miCoche.get_estado() << endl;

    cout << "------------------------" << endl;

    // Crear instancia de Camion
    Camion miCamion("Volvo", 15);
    cout << "Camión: " << miCamion.get_capacidadCarga() << " toneladas" << endl;
    cout << "Marca: " << miCamion.get_marca() << endl;
    miCamion.cargar();
    miCamion.descargar();

    cout << "------------------------" << endl;

    // Crear instancia de Motocicleta
    Motocicleta miMoto("Honda", 600);
    cout << "Motocicleta: " << miMoto.get_cilindrada() << " cc" << endl;
    cout << "Marca: " << miMoto.get_marca() << endl;
    miMoto.ponerCasco();
    miMoto.quitarCasco();

    return 0;

};