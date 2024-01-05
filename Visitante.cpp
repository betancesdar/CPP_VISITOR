//
// Created by Alex Betances on 1/4/24.
//
#include <iostream>
#include "Visitante.h"
#include "Region.h"

class Explorador : public Visitante {
public:
    void visitar(Ciudad& ciudad) override{
        std::cout << " El explorador visita la ciudad y habla con un ciudadano random" << std::endl;
    }
    void visitar(Bosque& bosque) override{
        std::cout << " Explorador esta cogiendo maderas... y encontro recursos!" << std::endl;
    }
    void visitar(Cueva& Cueva) override{
        std::cout << " Busca tesoro en la cueva y no encontro nada." << std::endl;
    }
};
