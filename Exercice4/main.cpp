
#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {

    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 7;
    A.at(0, 1) = 4;
    A.at(1, 0) = 9;
    A.at(1, 1) = 1;

    B.at(0, 0) = 3;
    B.at(0, 1) = 5;
    B.at(1, 0) = 6;
    B.at(1, 1) = 2;

    cout << "Matrice A :" << endl << A;
    cout << "Matrice B :" << endl << B;

    cout << "Addition A + B :" << endl;
    cout << A + B;

    cout << "Multiplication A * B :" << endl;
    cout << A * B;


    Matrix<double, 3, 3> C;
    Matrix<double, 3, 3> D;

    C.at(0, 0) = 4.5;
    C.at(1, 1) = 8.5;
    C.at(2, 2) = 1.5;

    D.at(0, 0) = 8.0;
    D.at(1, 1) = 4.0;
    D.at(2, 2) = 2.0;

    cout << "Matrice C :" << endl << C;
    cout << "Matrice D :" << endl << D;

    cout << "Addition C + D :" << endl;
    cout << C + D;

    cout << "Multiplication C * D :" << endl;
    cout << C * D;

    return 0;
}
