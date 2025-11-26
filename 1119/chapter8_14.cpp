#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int a[4][4];

    // 1. 배열 채우기 & 출력
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 2;       // ★ 시험에서 빈칸 자주 나오는 부분
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // 2. 행에서 가장 많은 1의 개수 찾기
    int maxRow = 0;
    int maxRowCount = -1;

    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == 1) count++;
        }
        if (count > maxRowCount) {       // ★ 조건 빈칸 포인트
            maxRowCount = count;
            maxRow = i;
        }
    }

    // 3. 열에서 가장 많은 1의 개수 찾기
    int maxCol = 0;
    int maxColCount = -1;

    for (int j = 0; j < 4; j++) {
        int count = 0;
        for (int i = 0; i < 4; i++) {
            if (a[i][j] == 1) count++;
        }
        if (count > maxColCount) {       // ★ 시험 단골 if 조건 빈칸
            maxColCount = count;
            maxCol = j;
        }
    }

    cout << "The largest row index: " << maxRow << endl;
    cout << "The largest column index: " << maxCol << endl;

    return 0;
}