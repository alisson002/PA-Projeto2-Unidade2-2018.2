#include "reta.h"


Reta::Reta(int _x0, int _y0, int _x1, int _y1, char _brush){

    x0 = _x0;
    y0 = _y0;
    x1 = _x1;
    y1 = _y1;
    brush = _brush;
}

int Reta::Sinal(int x){

    if(x < 0){

        return -1;

    }

    else if(x == 0){

        return 0;

    }

    else{

        return 1;

    }

}

void Reta::draw(Screen &t){//Método retirado daqui: https://agostinhobritojr.github.io/curso/cg/linhas.html#(9)

    t.setBrush(brush);

    int Troca;
    int x = x1;
    int y = y1;
    int Delta_x = abs(x1 - x0);
    int Delta_y = abs(y1 - y0);
    int s1 = Sinal(x1 - x0);
    int s2 = Sinal(y1 - y0);

    if(Delta_y > Delta_x){

        int Temp = Delta_x;
        Delta_x = Delta_y;
        Delta_y = Temp;
        Troca = 1;

    }
    else{

        Troca = 0;
    }

   int new_e = 2*Delta_y - Delta_x;

   for(int i=1; i<= Delta_x; i++){

        t.setPixel(x,y);

        while (new_e >= 0){

            if(Troca == 1){

                x = x + s1;

            }

            else{

                y = y + s2;

            }

            new_e = new_e - 2*Delta_x;
        }

        if(Troca == 1){

            y = y + s2;

        }
        else{

            x = x + s1;

        }

        new_e = new_e + 2*Delta_y;

   }
}

