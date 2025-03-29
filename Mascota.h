#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <vector>
#include "Objeto.h"

class Mascota {
private:
    std::string nombre;
    int energia;
    std::string salud;
    int edad;
    std::string estadoEmocional;
    std::vector<std::string> habilidades;
    std::vector<std::string> historialCuidados;
public:
    Mascota(std::string nombre);
    std::string getNombre() const;
    void aprenderHabilidad(std::string habilidad);
    void recibirObjeto(Objeto* objeto);
    void aumentarExperiencia(int exp);
    void registrarCuidado(std::string cuidado);
};
