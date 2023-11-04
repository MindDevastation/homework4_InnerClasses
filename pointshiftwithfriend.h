#ifndef POINTSHIFTWITHFRIEND_H
#define POINTSHIFTWITHFRIEND_H

class Vector3Df;

class Point3Df
{
    double Px = 0.0, Py = 0.0 , Pz = 0.0;
public:
    Point3Df(double x, double y, double z);
    void moveByVector(Vector3Df &Vec);

    double getPx (){return Px;}

    double getPy (){return Py;}

    double getPz (){return Pz;}
};

class Vector3Df
{
    double Vx = 0.0, Vy = 0.0 , Vz = 0.0;
public:
    Vector3Df(double x, double y, double z);

    double getVx (){return Vx;}

    double getVy (){return Vy;}

    double getVz (){return Vz;}
    friend void Point3Df::moveByVector(Vector3Df &Vec);
};



#endif // POINTSHIFTWITHFRIEND_H
