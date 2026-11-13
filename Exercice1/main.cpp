
#include <iostream>
#include "Point3D.h"
using namespace std;

int main() {

    Point3D p1(16, 19, 17);
    Point3D p2(5, 1, 8);

    cout << "Point 1 : ";
    cout << "(" << p1.getX() << ", "
         << p1.getY() << ", "
         << p1.getZ() << ")" << endl;

    cout << "Point 2 : ";
    cout << "(" << p2.getX() << ", "
         << p2.getY() << ", "
         << p2.getZ() << ")" << endl;

    return 0;
}
