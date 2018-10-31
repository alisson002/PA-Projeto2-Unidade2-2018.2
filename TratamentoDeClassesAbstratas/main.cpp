#include <iostream>
#include "screen.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <vector>
#include <list>


using namespace std;

int main(){

    ifstream input;
    ofstream output;
    Screen t;
    string s;

    input.open("../TratamentoDeClassesAbstratas/input.txt");

    if(input.is_open()){

        cout<<"input.txt aberto com sucesso!"<<endl;

    }

    output.open("../TratamentoDeClassesAbstratas/output.txt");

    list <FiguraGeometrica*>::iterator li;
    list <FiguraGeometrica*> figuras;

    while(input.good()){

        getline(input, s);

        if(input.good()){

            string cmd;
            stringstream sstream(s);
            sstream >> cmd;

            if(cmd.compare("dim")==0){

                int x, y;
                sstream >> x >> y;
                t.setScreen(x,y);

            }

            if(cmd.compare("Reta")==0){

                int x0, y0, x1,y1;
                char brush;
                sstream >> x0 >>y0 >> x1 >> y1 >> brush;
                figuras.push_back(new Reta(x0,y0,x1,y1,brush));

            }
            if(cmd.compare("Retangulo")==0){

                int x0, y0, larg,alt,fillmode;
                char brush;
                sstream >> x0 >>y0 >> larg >> alt >>fillmode >> brush;
                figuras.push_back(new Retangulo(x0,y0,larg,alt,fillmode,brush));

            }
            if(cmd.compare("Circulo")==0){

                int x0, y0, r, fillmode;
                char brush;
                sstream >> x0 >>y0 >> r >> fillmode >> brush;
                figuras.push_back(new Circulo(x0,y0,r,fillmode,brush));

            }
        }
    }

    for(li = figuras.begin(); li!=figuras.end(); li++){
        (*li)->draw(t);
    }

    output <<t;
return 0;
}
