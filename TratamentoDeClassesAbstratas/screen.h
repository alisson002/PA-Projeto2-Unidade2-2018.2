#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <ostream>

using namespace std;

class Screen{//Classe concreta

private:

  // armazenam o tamanho da tela de desenho
  // numero de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> >mat;

public:

  Screen();

  // construtor da classe
  Screen(int _nlin=40, int _ncol=40);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  // envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);

};

#endif // SCREEN_H
