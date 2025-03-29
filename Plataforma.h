// PixelPets System

// Plataforma.h
#ifndef PLATAFORMA_H
#define PLATAFORMA_H
#include <iostream>
#include <map>
#include <vector>
#include "Usuario.h"
#include "Objeto.h"

class Plataforma {
    private:
        std::map<std::string, Usuario> usuarios;
        std::vector<Objeto> objetosDisponibles;
    public:
        void registrarUsuario(std::string nombre);
        void adoptarMascota(std::string nombreUsuario, Mascota* mascota);
        void brindarObjeto(std::string nombreUsuario, std::string nombreMascota, std::string nombreObjeto);
        void ensenarHabilidad(std::string nombreUsuario, std::string nombreMascota, std::string habilidad);
        void aumentarExperiencia(std::string nombreUsuario, std::string nombreMascota, int exp);
        void consultarHistorial(std::string nombreUsuario, std::string nombreMascota);
    };
