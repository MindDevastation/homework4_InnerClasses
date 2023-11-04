#include "pointshiftwithfriend.h"

Vector3Df::Vector3Df(double x, double y, double z)
{
    Vx = x;
    Vy = y;
    Vz = z;
}

Point3Df::Point3Df(double x, double y, double z){

    Px = x;
    Py = y;
    Pz = z;
}

void Point3Df::moveByVector(Vector3Df &Vec){
    Px += Vec.Vx;
    Py += Vec.Vy;
    Pz += Vec.Vz;
}
