
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    Point();
    Point(double a, double b);

    double getX() const;
    double getY() const;
};

#endif
