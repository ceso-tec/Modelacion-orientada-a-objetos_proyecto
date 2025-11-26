#include <iostream>
#include <string>
using namespace std;

class Coche {
private:
    string marca;
    string modelo;
    int anio;
    bool encendido;

public:
// Constructor por omision
    Coche() {
        marca = "";
        modelo = "";
        anio = 0;
        encendido = false;
    }

// Constructor por parametros
    Coche(string _marca, string _modelo, int _anio) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        encendido = false;  
    }

// Getters
    string get_marca() const {
        return marca;
    }
    string get_modelo() const {
        return modelo;
    }
    int get_anio() const {
        return anio;
    }
    bool is_encendido() const {
        return encendido;
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

// Metodo para encender el coche
    void encender() {
        if (!encendido) {
            encendido = true;
            cout << "El coche ha sido encendido." << endl;
        } else {
            cout << "El coche ya estaba encendido." << endl;
        }
    }

// Metodo para apagar el coche
    void apagar() {
        if (encendido) {
            encendido = false;
            cout << "El coche ha sido apagado." << endl;
        } else {
            cout << "El coche ya estaba apagado." << endl;
        }
    } 

string get_estado() const{
    return encendido ? "Encendido" : "Apagado";
}

};