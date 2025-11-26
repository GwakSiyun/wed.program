#include <iostream>
using namespace std;

const int SIZE = 2;   // (x, y) 두 개

// 함수 원형
void getRightmostLowestPoint(const double points[][SIZE],
                             int numberOfPoints,
                             double rightMostPoint[]);

int main() {
    const int NUMBER_OF_POINTS = 6;
    double points[NUMBER_OF_POINTS][SIZE];
    double rightMostPoint[SIZE];

    cout << "Enter 6 points: ";
    // 점 6개 입력 (x y x y x y ...)
    for (int i = 0; i < NUMBER_OF_POINTS; i++) {
        cin >> points[i][0] >> points[i][1];  // x, y
    }

    // 가장 오른쪽 & 가장 낮은 점 찾기
    getRightmostLowestPoint(points, NUMBER_OF_POINTS, rightMostPoint);

    cout << "The rightmost lowest point is ("
         << rightMostPoint[0] << ", " << rightMostPoint[1] << ")" << endl;

    return 0;
}

// points[i][0] = x, points[i][1] = y
void getRightmostLowestPoint(const double points[][SIZE],
                             int numberOfPoints,
                             double rightMostPoint[]) {
    // 처음 점을 기준으로 시작
    rightMostPoint[0] = points[0][0]; // x
    rightMostPoint[1] = points[0][1]; // y

    for (int i = 1; i < numberOfPoints; i++) {
        double x = points[i][0];
        double y = points[i][1];

        // 1) 더 낮은 y를 찾으면 교체
        // 2) y가 같다면 x가 더 큰(더 오른쪽) 점으로 교체
        if (y < rightMostPoint[1] ||
        (y == rightMostPoint[1] && x > rightMostPoint[0])) {
            rightMostPoint[0] = x;
            rightMostPoint[1] = y;
        }
    }
}