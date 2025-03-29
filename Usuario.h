#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <map>
#include "Mascota.h"

class Usuario {
private:
    std::string nombre;
    std::map<std::string, Mascota*> mascotas;
public:
    Usuario(std::string nombre) : nombre(nombre) {}
    void adoptarMascota(Mascota* mascota);
    void consultarHistorial(std::string nombreMascota);
};
