#include "Plataforma.h"

void Plataforma::registrarUsuario(std::string nombre) {
    usuarios[nombre] = Usuario(nombre);
}

void Plataforma::adoptarMascota(std::string nombreUsuario, Mascota* mascota) {
    usuarios[nombreUsuario].adoptarMascota(mascota);
}

void Plataforma::brindarObjeto(std::string nombreUsuario, std::string nombreMascota, std::string nombreObjeto) {
    // Implementación de brindar objeto a una mascota
}

void Plataforma::ensenarHabilidad(std::string nombreUsuario, std::string nombreMascota, std::string habilidad) {
    // Implementación de enseñar habilidad a una mascota
}

void Plataforma::aumentarExperiencia(std::string nombreUsuario, std::string nombreMascota, int exp) {
    // Implementación de aumentar experiencia a una mascota
}

void Plataforma::consultarHistorial(std::string nombreUsuario, std::string nombreMascota) {
    // Implementación de consulta de historial
}