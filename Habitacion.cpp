#include "Habitacion.hh"


Habitacion::Habitacion(float pre, int num, int cap) {
    this->precio = pre; 
    this->numero = num; 
    this->capacidad = cap;
}

Habitacion::~Habitacion() {
}

void Habitacion::setPrecio(float pre) {
    this->precio = pre; 
}

void Habitacion::setNumero(int num) {
    this->numero = num;
}

void Habitacion::setCapacidad(int cap) {
    this->capacidad = cap; 
}

float Habitacion::getPrecio() {
    return this->precio; 
}

int Habitacion::getNumero() {
    return this->numero;
}

int Habitacion::getCapacidad(){
    return this->capacidad;
}

