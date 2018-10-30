#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"


class FiguraGeometrica{//Classe abstrata

public:

    char brush;
    virtual void draw(Screen &t) = 0;

};

#endif // FIGURAGEOMETRICA_H
