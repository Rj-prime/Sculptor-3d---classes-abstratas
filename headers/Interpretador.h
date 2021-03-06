#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "FiguraGeometrica.h"

class Interpretador{
  private:
    int dx,dy,dz;
    float r,g,b,a;
  
  public:
    Interpretador();

    vector <FiguraGeometrica*> parse (string filename);
    int getDx();
    int getDy();
    int getDz();
};
#endif