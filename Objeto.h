#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>
#include "Mascota.h"

class Objeto {
private:
    std::string nombre;
    std::string tipo;
    std::string efecto;
public:
    Objeto(std::string nombre, std::string tipo, std::string efecto);
    void aplicarEfecto(Mascota* mascota);
};