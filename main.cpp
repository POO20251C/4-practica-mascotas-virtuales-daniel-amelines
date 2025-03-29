// main.cpp
#include <iostream>
#include "Menu.h"

int main() {
    Plataforma plataforma;
    Menu menu(&plataforma);
    
    int opcion;
    do {
        menu.mostrarMenu();
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        menu.ejecutarOpcion(opcion);
    } while (opcion != 0);

    std::cout << "Saliendo del sistema...\n";
    return 0;
}
