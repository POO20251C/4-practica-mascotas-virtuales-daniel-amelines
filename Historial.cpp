#include "Historial.h"

void Historial::agregarRegistro(std::string registro) {
    registros.push_back(registro);
}

void Historial::obtenerHistorial() const {
    for (const auto& registro : registros) {
        std::cout << registro << std::endl;
    }
}