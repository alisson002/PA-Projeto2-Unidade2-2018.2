#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <ostream>

using namespace std;

using namespace std;
/**
 * @brief The Screen class: Classe responsável pela construção da tela
 */
class Screen{//Classe concreta

private:

  // armazenam o tamanho da tela de desenho
  // numero de linhas e de colunas
    /**
   * @brief nlin: Numero de linhas da tela
   * @brief ncol: Numero de colunas da tela
   */
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  /**
   * @brief brush: caractere de desenho na tela
   */
  char brush;

  // armazena a matriz da tela
  /**
   * @brief mat: Armazena a matriz da tela
   */
  vector< vector<char> >mat;

public:

  // construtor da classe
  /**
   * @brief Screen: Construtor com argumentos
   * @param _nlin: Numero de linhas da tela
   * @param _ncol: Numero de colunas da tela
   */
  Screen(int _nlin=40, int _ncol=40);
  /**
   * @brief setScreen: Seta a matriz na tela
   * @param lin: Numero de linhas da tela
   * @param col: Numero de colunas da tela
   */
  void setScreen(int lin, int col);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  /**
   * @brief setPixel: Desenha um pixel da matriz usando o caratere guardado em brush
   * @param x: Coordenada do pixel em x
   * @param y: Coordenada do pixel em y
   */
  void setPixel(int x, int y);

  // limpa a tela
  /**
   * @brief clear: Limpa a tela
   */
  void clear();

  // muda o caractere de desenho
  /**
   * @brief setBrush: Muda o caractere guardado em brush
   * @param _brush: Caractere de desenho
   */
  void setBrush(char _brush);

  // envia a tela para um stream de saida
  /**
   * @brief ostream&: envia a tela para um stream de saida
   * @param os
   * @param t: Tela
   * @return
   */
  friend ostream& operator<<(ostream &os, Screen &t);

};

#endif // SCREEN_H
