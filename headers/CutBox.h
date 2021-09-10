 #ifndef CUTBOX_H
#define CUTBOX_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class CutBox : public FiguraGeometrica{
  private:
    int x0,x1,y0,y1,z0,z1;
  public:
    CutBox(int x0_,int x1_,int y0_,int y1_, int z0_, int z1_, float r_, float g_, float b_,float a_);
    ~CutBox () {}
    void draw (Sculptor &s);
};
#endif