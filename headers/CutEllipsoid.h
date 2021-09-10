#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class CutEllipsoid : public FiguraGeometrica{
  private:
    int xcenter,ycenter,zcenter,rx,ry,rz;
  public:
    CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_,int ry_,int rz_, float r_, float g_, float b_,float a_);
    ~CutEllipsoid(){}
    void draw (Sculptor &s);
};
#endif