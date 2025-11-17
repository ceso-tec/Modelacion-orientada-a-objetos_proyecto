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
    Coche(string _marca, string _modelo, int _anio) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
        encendido = false;  
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

string getEstado() const{
    return encendido ? "Encendido" : "Apagado";
}

int getAnio() const {
    return anio;
}   

string getMarcaModelo() const {
    return marca + " " + modelo;
} 
};