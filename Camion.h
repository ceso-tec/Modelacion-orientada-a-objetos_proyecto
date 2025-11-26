#include <iostream>
#include <string>

using namespace std;

class Camion {
private:
    string marca;
    int capacidadCarga; // en toneladas
    bool tieneCarga;

public:
// Constructor por omision
    Camion() {
        marca = "";
        capacidadCarga = 0;
        tieneCarga = false;
    }

// Getters
    string get_marca() const {
        return marca;
    }
    int get_capacidadCarga() const {
        return capacidadCarga;
    }
    bool get_tieneCarga() const {
        return tieneCarga;
    }

// Setters
    void set_marca(string _marca) {
        marca = _marca;
    }
    void set_capacidadCarga(int _capacidadCarga) {
        capacidadCarga = _capacidadCarga;
    }

// Constructor por parametros
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

};