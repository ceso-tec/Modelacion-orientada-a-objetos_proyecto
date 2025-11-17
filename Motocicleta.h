#include <iostream>
#include <string>

using namespace std;

class Motocicleta {
private:
    string marca;
    int cilindrada;
    bool cascoPuesto;

public:
    Motocicleta(string _marca, int _cilindrada) {
        marca = _marca;
        cilindrada = _cilindrada;
        cascoPuesto = false;  
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

int getCilindrada() const {
    return cilindrada;
}
string getMarca() const {
    return marca;
}
};