#include "cutsphere.h"

CutSphere::CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_, float r_, float g_, float b_,float a_){
   xcenter =  xcenter_;
   ycenter = ycenter_;
   zcenter = zcenter_;
   radius = radius_;
   r = r_;
   g = g_;
   b = b_;
   a = a_;
}
void CutSphere ::draw (Sculptor &s ){
  s.setcolor(r,g,b,a);
  s.cutSphere( xcenter ,  ycenter,  zcenter, radius);
  
  
  /*int x0 = (xcenter - radius < 0)	? 0 : xcenter - radius;
	int x1 = (xcenter + radius > this -> nx) ? this -> nx : xcenter + radius;
	int y0 = (ycenter -radius < 0) ? 0 : ycenter - radius;
  int y1 = (ycenter + radius > this -> ny) ? this -> ny : ycenter + radius;
  int z0 = (zcenter - radius < 0) ? 0 : zcenter - radius;
  int z1 = (zcenter + radius> this -> nz) ? this -> nz : zcenter + radius;

  for(int i = x0; i < x1; i++){
		for (int j = y0; j < y1; j++){
			for (int k = z0; k < z1; k++){
				if(pow(i - xcenter, 2) / pow(radius, 2) + pow(j - ycenter, 2) / pow(radius, 2) + pow(k - zcenter, 2) / pow(radius, 2) < 1){
			    s.cutVoxel (i,j,k);
				}
			}
		}
	}
  */
}