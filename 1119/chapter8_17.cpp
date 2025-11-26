#include <iostream>
using namespace std;

// 함수 원형
void locateLargest(const double a[][4], int location[]);

int main() {
    double a[3][4];

    cout << "Enter the array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    int location[2];
    locateLargest(a, location);

    cout << "The location of the largest element is at ("
        << location[0] << ", " << location[1] << ")" << endl;

    return 0;
}

// ★ 함수 정의 – 위의 원형과 똑~같이!
void locateLargest(const double a[][4], int location[]) {
    int maxRow = 0;
    int maxCol = 0;
    double maxVal = a[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    location[0] = maxRow;
    location[1] = maxCol;
}