#include <iostream>
using namespace std;

const int SIZE = 2;

// 함수 원형
bool linearEquation(const double a[][SIZE], const double b[], double result[]);

int main() {
    double a[SIZE][SIZE];   // 계수 행렬 a00, a01, a10, a11
    double b[SIZE];         // 상수항 b0, b1
    double result[SIZE];    // 해 (x, y)

    cout << "Enter a00, a01, a10, a11, b0, b1: ";
    cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1] >> b[0] >> b[1];

    if (linearEquation(a, b, result)) {
        cout << "x is " << result[0]
             << " and y is " << result[1] << endl;
    } else {
        cout << "The equation has no solution" << endl;
    }

    return 0;
}

// a: 2×2 계수 행렬, b: 상수항, result[0] = x, result[1] = y
bool linearEquation(const double a[][SIZE], const double b[], double result[]) {
    // 행렬식(det) = a00*a11 - a01*a10
    double det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    // det = 0 이면 해가 없거나 무한히 많음 → 여기선 "no solution" 처리
    if (det == 0)
        return false;

    // 문제에서 준 공식 그대로 사용
    // x = (b0*a11 - b1*a01) / det
    // y = (b1*a00 - b0*a10) / det
    result[0] = (b[0] * a[1][1] - b[1] * a[0][1]) / det;  // x
    result[1] = (b[1] * a[0][0] - b[0] * a[1][0]) / det;  // y

    return true;
}