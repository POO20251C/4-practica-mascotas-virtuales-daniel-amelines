#include "Mascota.h"

Mascota::Mascota(std::string nombre) : nombre(nombre), energia(100), salud("sano"), edad(0), estadoEmocional("feliz") {}

std::string Mascota::getNombre() const {
    return nombre;
}

void Mascota::aprenderHabilidad(std::string habilidad) {
    habilidades.push_back(habilidad);
}

void Mascota::recibirObjeto(Objeto* objeto) {
    // Implementación de recibir objeto
}

void Mascota::aumentarExperiencia(int exp) {
    // Implementación de aumento de experiencia
}

void Mascota::registrarCuidado(std::string cuidado) {
    historialCuidados.push_back(cuidado);
}