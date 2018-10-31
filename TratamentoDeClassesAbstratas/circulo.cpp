#include "circulo.h"


Circulo::Circulo(int _x0, int _y0, int _r, int _fillmode, char _brush){

    r = _r;
    x0 = _x0;
    y0 = _y0;
    fillmode = _fillmode;
    brush = _brush;

}

void Circulo::draw(Screen &t){

    t.setBrush(brush);

    int x = 0;
    int y = r;
    int dmtr = 1-r;

    while(y > x){

        t.setPixel(x0 + x, y0 + y);
        t.setPixel(x0 + y, y0 + x);
        t.setPixel(x0 - y, y0 + x);
        t.setPixel(x0 - x, y0 + y);
        t.setPixel(x0 - x, y0 - y);
        t.setPixel(x0 - y, y0 - x);
        t.setPixel(x0 + y, y0 - x);
        t.setPixel(x0 + x, y0 - y);

        if(dmtr < 0){

             dmtr = dmtr + 2*x + 3;
             x = x + 1;

           }

           else{

             dmtr = dmtr + 2*(x-y) + 5;
             x = x + 1;
             y = y - 1;

           }

        if(fillmode == 1){

            for (int i = x0 - x; i <= x0 + x; i++){

                t.setPixel(i, y0 + y);
                t.setPixel(i, y0 - y);

            }

            for (int i = x0 - y; i <= x0 + y; i++){

                t.setPixel(i, y0 + x);
                t.setPixel(i, y0 - x);

            }
        }
    }
}

