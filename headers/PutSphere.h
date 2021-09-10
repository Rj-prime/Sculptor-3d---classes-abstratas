#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutSphere : public FiguraGeometrica{
  private:
    int xcenter,ycenter,zcenter,radius;
  public:
    PutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_, float r_, float g_, float b_,float a_);
    ~PutSphere(){}
    void draw (Sculptor &s);
};
#endif