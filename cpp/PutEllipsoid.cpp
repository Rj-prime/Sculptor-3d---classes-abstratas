#include "putellipsoid.h"

PutEllipsoid::PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_,int ry_,int rz_, float r_, float g_, float b_,float a_){
  xcenter =  xcenter_;
  ycenter = ycenter_;
  zcenter = zcenter_;
  rx = rx_;
  ry = ry_;
  rz = rz_;
  r = r_;
  g = g_;
  b = b_;
  a = a_;
}
void PutEllipsoid::draw (Sculptor &s ){
  s.setcolor(r,g,b,a);
  putEllipsoid( xcenter , ycenter,  zcenter,  rx,  ry,  rz);
  /*int x0 = (xcenter - rx < 0)	? 0 : xcenter - rx;
	int x1 = (xcenter + rx > this -> nx) ? this -> nx : xcenter + rx;
	int y0 = (ycenter - ry < 0) ? 0 : ycenter - ry;
    int y1 = (ycenter + ry > this -> ny) ? this -> ny : ycenter + ry;
    int z0 = (zcenter - rz < 0) ? 0 : zcenter - rz;
    int z1 = (zcenter + rz > this -> nz) ? this -> nz : zcenter + rz;
    
    for(int i = x0; i < x1; i++){
		for (int j = y0; j < y1; j++){
			for (int k = z0; k < z1; k++){
				if(pow(i - xcenter, 2) / pow(rx, 2) + pow(j - ycenter, 2) / pow(ry, 2) + pow(k - zcenter, 2) / pow(rz, 2) < 1){
				 s.putVoxel (i,j,k);
				}
			}
		}
	}*/
}