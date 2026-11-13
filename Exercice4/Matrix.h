
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T, int N, int M>
class Matrix {
private:
    T data[N][M];

public:
    Matrix() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = T();
            }
        }
    }

    T& at(int i, int j) {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }
        return data[i][j];
    }

    // Addition
    Matrix operator+(const Matrix& autre) const {
        Matrix resultat;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                resultat.data[i][j] = data[i][j] + autre.data[i][j];
            }
        }

        return resultat;
    }

    // Multiplication
    Matrix<T, N, M> operator*(const Matrix<T, M, M>& autre) const {
        Matrix<T, N, M> resultat;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                resultat.data[i][j] = T();

                for (int k = 0; k < M; k++) {
                    resultat.data[i][j] += data[i][k] * autre.data[k][j];
                }
            }
        }

        return resultat;
    }

    template <typename U, int L, int C>
    friend ostream& operator<<(ostream& os, const Matrix<U, L, C>& mat);
};

template <typename U, int L, int C>
ostream& operator<<(ostream& os, const Matrix<U, L, C>& mat) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            os << mat.data[i][j] << "\t";
        }
        os << endl;
    }

    return os;
}

#endif
