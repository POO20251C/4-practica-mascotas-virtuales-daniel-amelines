#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <iostream>
#include <vector>

class Historial {
private:
    std::vector<std::string> registros;
public:
    void agregarRegistro(std::string registro);
    void obtenerHistorial() const;
};