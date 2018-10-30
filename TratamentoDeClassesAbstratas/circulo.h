#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"


class Circulo: public FiguraGeometrica{//Classe concreta

private:

    int r, x0, y0, fillmode;
    char brush;

public:

    Circulo(int _r, int _x0, int _y0, int _fillmode, char _brush);
    void draw(Screen &t);

};

#endif // CIRCULO_H
