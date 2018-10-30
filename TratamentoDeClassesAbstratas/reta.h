#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"


class Reta: public FiguraGeometrica{//Classe concreta

private:
    int x0, y0, x1, y1;
    char brush;
public:

    Reta(int _x0, int _y0, int _x1,int _y1, char brush);
    void draw(Screen &t);

};

#endif // RETA_H
