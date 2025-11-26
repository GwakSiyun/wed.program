#include <iostream>
using namespace std;

const int SIZE = 3;

// 함수 원형
void sortColumns(const double m[][SIZE], double result[][SIZE]);

int main() {
    double m[SIZE][SIZE];
    double result[SIZE][SIZE];

    cout << "Enter a 3 by 3 matrix row by row:" << endl;

    // 입력
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    // 열 정렬 수행
    sortColumns(m, result);

    // 출력
    cout << "The column-sorted array is" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// ★ 함수 정의 (열 기준 정렬)
void sortColumns(const double m[][SIZE], double result[][SIZE]) {

    // 1. 원본 m 배열을 result에 복사
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = m[i][j];
        }
    }

    // 2. 각 열(column)을 버블 정렬로 오름차순 정렬
    for (int col = 0; col < SIZE; col++) {          // 열 선택
        for (int i = 0; i < SIZE - 1; i++) {        // 행 비교
            for (int j = i + 1; j < SIZE; j++) {    // 아래와 비교
                if (result[i][col] > result[j][col]) {
                    double temp = result[i][col];
                    result[i][col] = result[j][col];
                    result[j][col] = temp;
                }
            }
        }
    }
}