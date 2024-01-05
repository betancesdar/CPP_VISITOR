//
// Created by Alex Betances on 1/4/24.
//
#ifndef VISITOR_REGION_H
#define VISITOR_REGION_H

#include "Visitante.h"

class Region {
public:
    virtual void aceptar(Visitante& visitante) = 0;
    virtual ~Region();
};

class Ciudad : public Region {
public:
    void aceptar(Visitante& visitante) override;
};
class Bosque : public Region {
public:
    void aceptar(Visitante& visitante) override;
};
class Cueva : public Region {
public:
    void aceptar(Visitante& visitante) override;
};

#endif //VISITOR_REGION_H
