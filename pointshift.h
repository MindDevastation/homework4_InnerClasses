#ifndef POINTSHIFT_H
#define POINTSHIFT_H


class Vector3D
{
    double Vx = 0.0, Vy = 0.0 , Vz = 0.0;
public:
    Vector3D(double x, double y, double z);

    double getVx (){return Vx;}

    double getVy (){return Vy;}

    double getVz (){return Vz;}

    class Point3D
    {
        double Px = 0.0, Py = 0.0 , Pz = 0.0;
    public:
        Point3D(double x, double y, double z);
        void moveByVector(const Vector3D &Vec){
            Px += Vec.Vx;
            Py += Vec.Vy;
            Pz += Vec.Vz;
        }

        double getPx (){return Px;}

        double getPy (){return Py;}

        double getPz (){return Pz;}
    };
};

#endif // POINTSHIFT_H
