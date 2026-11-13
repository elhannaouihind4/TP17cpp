
#include "../include/Point.h"
Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double a, double b) {
    x = a;
    y = b;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}
