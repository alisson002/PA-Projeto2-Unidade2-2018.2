#include "screen.h"

Screen::Screen(){

}

Screen::Screen(int _nlin, int _ncol){

    nlin = _nlin;
    ncol = _ncol;
    char brush;

    mat = vector< vector<char> >(nlin, vector<char>(ncol,brush = ' '));
}

void Screen::setPixel(int x, int y){

    if((x>=0 && y>=0)&&(x<=ncol && y<=nlin)){

        mat[x][y] = brush;

    }
}

void Screen::clear(){

    for(int i=0;i<=nlin;i++){
        for(int j=0;j<=ncol;j++){

            mat[i][j] = ' ';

        }
    }

}

void Screen::setBrush(char _brush){

    brush = _brush;

}

ostream& operator<<(ostream &os, Screen &t){

    for(int i=0;i<=t.nlin;i++){
        for(int j=0;j<=t.ncol;j++){

            os << t.mat[i][j];

        }

        os << endl;

    }

    return os;

}



