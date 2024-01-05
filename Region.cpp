//
// Created by Alex Betances on 1/4/24.
//
#include "Region.h"
#include "Visitante.h"

void Ciudad::aceptar(Visitante &visitante) {
    visitante.visitar(*this);
}
void Bosque::aceptar(Visitante &visitante) {
    visitante.visitar(*this);
}
void Cueva::aceptar(Visitante &visitante) {
    visitante.visitar(*this);
}