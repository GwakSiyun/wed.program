#include <iostream>
using namespace std;

const int SIZE = 3;

// 함수 원형
bool isMarkovMatrix(const double m[][SIZE]);

int main() {
    double m[SIZE][SIZE];

    cout << "Enter a 3 by 3 matrix row by row:" << endl;

    // 행(row) 단위 입력
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    // 검사 후 출력
    if (isMarkovMatrix(m))
        cout << "It is a Markov matrix" << endl;
    else
        cout << "It is not a Markov matrix" << endl;

    return 0;
}

// 함수 정의
bool isMarkovMatrix(const double m[][SIZE]) {
    // 열(column) 단위로 확인
    for (int j = 0; j < SIZE; j++) {
        double colSum = 0;

        for (int i = 0; i < SIZE; i++) {
            // 1) 모든 원소는 양수여야 한다
            if (m[i][j] <= 0)
                return false;

            // 2) 열의 합 계산
            colSum += m[i][j];
        }

        // 3) 열의 합이 정확히 1인지 확인
        if (colSum != 1.0)
            return false;
    }

    return true;
}