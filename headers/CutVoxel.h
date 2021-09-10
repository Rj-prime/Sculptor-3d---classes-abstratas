#ifedf CUTVOXEL_H
#Define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

classe CutVoxel: public FiguraGeometrica{
  private:
    int x,y,z;
  public:
    CutVoxel(int x_, int y_, int z_)
    ~CutVoxel () {}
    void draw (Sculptor &s);
};
#endif