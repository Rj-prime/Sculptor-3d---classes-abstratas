#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutEllipsoid : public FiguraGeometrica{
  private:
    int xcenter,ycenter,zcenter,rx,ry,rz;
  public:
    PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_,int ry_,int rz_, float r_, float g_, float b_,float a_);
    ~PutEllipsoid(){}
    void draw (Sculptor &s);
};
#endif