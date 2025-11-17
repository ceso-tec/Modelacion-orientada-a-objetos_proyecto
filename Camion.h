#include <iostream>
#include <string>

using namespace std;

class Camion {
private:
    string marca;
    int capacidadCarga; // en toneladas
    bool tieneCarga;

public:
    Camion(string _marca, int _capacidadCarga) {
        marca = _marca;
        capacidadCarga = _capacidadCarga;
        tieneCarga = false;  
    }

// Metodo para cargar el camion
    void cargar() {
        if (!tieneCarga) {
            tieneCarga = true;
            cout << "El camión ha sido cargado." << endl;
        } else {
            cout << "El camión ya estaba cargado." << endl;
        }
    }

// Metodo para descargar el camion
    void descargar() {
        if (tieneCarga) {
            tieneCarga = false;
            cout << "El camión ha sido descargado." << endl;
        } else {
            cout << "El camión ya estaba descargado." << endl;
        }
    }

string getMarca() const {
    return marca;
}   

int getCapacidadCarga() const {
    return capacidadCarga;
}
};