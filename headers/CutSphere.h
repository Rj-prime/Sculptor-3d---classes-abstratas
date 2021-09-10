#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class CutSphere : public FiguraGeometrica{
  private:
    int xcenter,ycenter,zcenter,radius;
  public:
    CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_, float r_, float g_, float b_,float a_);
    ~CutSphere(){}
    void draw (Sculptor &s);
};
#endif