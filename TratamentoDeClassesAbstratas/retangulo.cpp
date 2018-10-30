#include "retangulo.h"


Retangulo::Retangulo(int _x0, int _y0, int _larg, int _alt, int _fillmode, char _brush){

    x0 = _x0;
    y0 = _y0;
    larg = _larg;
    alt = _alt;
    fillmode = _fillmode;
    brush = _brush;

}

void Retangulo::draw(Screen &t){

    t.setBrush(brush);

    if(fillmode == 1){
        for(int i = x0; i < (x0+larg); i++){
            for(int j = y0; j < (y0+alt); j++){

                t.setPixel(i,j);

            }
        }
    }

    else{
        for(int i = x0; i < (x0+larg); i++){
            for(int j = y0; j < (y0+alt); j++){
                if(((i == x0 || i == x0+larg-1) || (j == y0 || j == y0+alt-1))){

                    t.setPixel(i,j);

                }
            }
        }
    }
}
