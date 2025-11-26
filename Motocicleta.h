#include <iostream>
#include <string>

using namespace std;

class Motocicleta {
private:
    string marca;
    int cilindrada;
    bool cascoPuesto;

public:
// Constructor por omision
    Motocicleta() {
        marca = "";
        cilindrada = 0;
        cascoPuesto = false;
    }
    
// Constructor por parametros
    Motocicleta(string _marca, int _cilindrada) {
        marca = _marca;
        cilindrada = _cilindrada;
        cascoPuesto = false;  
    }

// Getters
    int get_cilindrada() const {
        return cilindrada;
    }
    string get_marca() const {
        return marca;
    }
    bool get_cascoPuesto() const {
        return cascoPuesto;
    }

// Setters 
    void set_cilindrada(int _cilindrada) {
        cilindrada = _cilindrada;
    }
    void set_marca(string _marca) {
        marca = _marca;
    }

// Metodo para poner el casco
    void ponerCasco() {
        if (!cascoPuesto) {
            cascoPuesto = true;
            cout << "El casco ha sido puesto." << endl;
        } else {
            cout << "El casco ya estaba puesto." << endl;
        }
    }

// Metodo para quitar el casco
    void quitarCasco() {
        if (cascoPuesto) {
            cascoPuesto = false;
            cout << "El casco ha sido quitado." << endl;
        } else {
            cout << "El casco ya habia sido quitado." << endl;
        }
    }

};