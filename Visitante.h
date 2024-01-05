//
// Created by Alex Betances on 1/4/24.
//
#ifndef VISITOR_VISITANTE_H
#define VISITOR_VISITANTE_H

class Ciudad;
class Bosque;
class Cueva;


class Visitante {
public:
    virtual void visitar(Ciudad& ciudad) = 0;
    virtual void visitar(Bosque& bosque) = 0;
    virtual void visitar(Cueva& cueva) = 0;
};

#endif //VISITOR_VISITANTE_H
