#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutVoxel: public FiguraGeometrica{
  private:
    int x,y,z;
  public:
    PutVoxel (int x_, int y_, int z_, float r_, float g_, float b_,float a_);

    ~PutVoxel () {}

    void draw (Sculptor &s);
};
#endif
