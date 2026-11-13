
#include "Point3D.h"

Point3D::Point3D() {
    x = 0;
    y = 0;
    z = 0;
}

Point3D::Point3D(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}

double Point3D::getX() {
    return x;
}

double Point3D::getY() {
    return y;
}

double Point3D::getZ() {
    return z;
}
