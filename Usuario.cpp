#include "Usuario.h"

void Usuario::adoptarMascota(Mascota* mascota) {
    mascotas[mascota->getNombre()] = mascota;
}

void Usuario::consultarHistorial(std::string nombreMascota) {
    // Implementación de consulta de historial
}