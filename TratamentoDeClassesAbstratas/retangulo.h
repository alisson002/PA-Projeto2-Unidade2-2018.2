#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

/**
 * @brief The Retangulo class: Desenha um retângulo
 */
class Retangulo: public FiguraGeometrica{//Classe concreta

private:
    int x0,y0,larg,alt,fillmode;
    char brush;
public:
    /**
     * @brief Retangulo: Construtor com argumentos
     * @param _x0: Coordenada x do ponto inicial
     * @param _y0: Coordenada y do ponto inicial
     * @param _larg: Largura
     * @param _alt: Altura
     * @param _fillmode: Determina se o retângulo é preenchido ou não
     * @param _brush: Caractere de desenho
     */
    Retangulo(int _x0, int _y0, int _larg, int _alt, int _fillmode, char _brush);
    /**
     * @brief draw: Desenha um retâmgulo na tela
     * @param t: Tela
     */
    void draw(Screen &t);

};

#endif // RETANGULO_H
