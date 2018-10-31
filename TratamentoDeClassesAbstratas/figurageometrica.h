#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief The FiguraGeometrica class: Classe abstrata para desenhar figuras geométricas
 */
class FiguraGeometrica{//Classe abstrata

public:
    /**
     * @brief brush: Caractere de desenho
     */
    char brush;
    /**
     * @brief draw: Desenha figuras geométricas
     * @param t: Tela
     */
    virtual void draw(Screen &t) = 0;

};

#endif // FIGURAGEOMETRICA_H
