#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"

class FiguraGeometrica{
  private:
    float r,g,b,a;
  public:
    virtual ~FiguraGeometrica(){}//destrutor
    virtual void draw(Sculptor &s)=0;




};//nossa classe abstrata
#enfif