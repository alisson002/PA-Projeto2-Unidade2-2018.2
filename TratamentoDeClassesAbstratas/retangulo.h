#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"


class Retangulo: public FiguraGeometrica{//Classe concreta

private:
    int x0,y0,larg,alt,fillmode;
    char brush;
public:

    Retangulo(int _x0, int _y0, int _larg, int _alt, int _fillmode, char _brush);
    void draw(Screen &t);

};

#endif // RETANGULO_H
