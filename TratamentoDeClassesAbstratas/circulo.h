#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

/**
 * @brief The Circulo class: Desenha circulos
 */
class Circulo: public FiguraGeometrica{//Classe concreta

private:

    int r, x0, y0, fillmode;
    char brush;

public:
    /**
     * @brief Circulo: Construtor com argumentos
     * @param _x0: Coordenada x inicial
     * @param _y0: Coordenada y inicial
     * @param _r: Raio
     * @param _fillmode: Determina se o circulo é preenchido ou não
     * @param _brush: Caractere de desenho
     */
    Circulo(int _x0, int _y0, int _r, int _fillmode, char _brush);
    /**
     * @brief draw: Desenha um circulo na tela
     * @param t: Tela
     */
    void draw(Screen &t);

};

#endif // CIRCULO_H
