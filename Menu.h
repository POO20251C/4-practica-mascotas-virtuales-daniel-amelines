#ifndef MENU_H
#define MENU_H
#include "Plataforma.h"

class Menu {
private:
    Plataforma* plataforma;
public:
    Menu(Plataforma* plataforma);
    void mostrarMenu();
    void ejecutarOpcion(int opcion);
};