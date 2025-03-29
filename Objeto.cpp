#include "Objeto.h"

Objeto::Objeto(std::string nombre, std::string tipo, std::string efecto) : nombre(nombre), tipo(tipo), efecto(efecto) {}

void Objeto::aplicarEfecto(Mascota* mascota) {
    // Implementación del efecto sobre la mascota
}
