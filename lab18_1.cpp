#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){

    double xleft   = max(r1.x, r2.x);
    double xright  = min(r1.x+r1.w, r2.x+r2.w);
    double ytop    = min(r1.y, r2.y);
    double ybottom = max(r1.y-r1.h, r2.y-r2.h);
    double overlapwidth = xright-xleft;
    double overlapheight = ytop-ybottom;

   if (overlapwidth<= 0 || overlapheight<=0){
        return 0;
    }
    return overlapwidth* overlapheight;

}
