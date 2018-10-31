#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

/**
 * @brief The Reta class: Desenha uma reta
 */
class Reta: public FiguraGeometrica{//Classe concreta

private:
    int x0, y0, x1, y1;
    char brush;
public:
    /**
     * @brief Reta: Construtor com argumentos
     * @param _x0: Coordenada x do ponto inicial
     * @param _y0: Coordenada y do ponto inicial
     * @param _x1: Coordenada x do ponto final
     * @param _y1: Coordenada y do ponto final
     * @param _brush: Caractere de desenho
     */
    Reta(int _x0, int _y0, int _x1,int _y1, char _brush);
    /**
     * @brief Sinal: auxilía draw no desenho da reta
     * @param x
     * @return
     */
    int Sinal(int x);
    /**
     * @brief draw: Desenha a reta na tela
     * @param t: Tela
     */
    void draw(Screen &t);

};

#endif // RETA_H
