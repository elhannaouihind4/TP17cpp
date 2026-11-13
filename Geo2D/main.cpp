
#include <iostream>
#include "include/Point.h"
#include "include/Triangle.h"
using namespace std;
#include <iomanip>

int main() {

    Point A(3, 1);
    Point B(3, 5);
    Point C(6, 7);

    Triangle t(A, B, C);

    cout << fixed << setprecision(2);


    cout << "Perimetre du triangle : "
         << t.perimetre() << endl;

    return 0;
}
