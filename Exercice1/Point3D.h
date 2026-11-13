
#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x, y, z;

public:
    Point3D();
    Point3D(double a, double b, double c);

    double getX();
    double getY();
    double getZ();
};

#endif
