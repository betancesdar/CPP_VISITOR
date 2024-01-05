//
// Created by Alex Betances on 1/4/24.
//
#include <vector>
#include "Region.h"
#include "Visitante.h"

int main() {
    std::vector<Region*> regiones = {new Ciudad(), new Bosque(), new Cueva();
    Explorador explorador;

    for(auto& region : regiones) {
        region->aceptar(explorador);
    }

    for(auto& region : regiones) {
        delete region;
    }

    return 0;
}