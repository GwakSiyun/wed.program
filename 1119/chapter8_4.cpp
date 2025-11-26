#include <iostream>
using namespace std;

int main() {
    int workHours[8][7] = {
        {2,4,3,4,5,8,8},
        {7,3,4,3,3,4,4},
        {3,3,4,3,3,2,2},
        {9,3,4,3,5,3,2},
        {3,5,4,3,3,6,8},
        {3,4,4,6,3,4,4},
        {3,7,4,8,3,8,4},
        {6,3,5,9,2,7,9}
    };

    int total[8][2];  // total[i][0] = 직원번호, total[i][1] = 총합

    // 1. 각 직원의 합 계산
    for (int i = 0; i < 8; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += workHours[i][j];   // ★ 시험에서 자주 빈칸 나오는 부분
        }
        total[i][0] = i;
        total[i][1] = sum;
    }

    // 2. 내림차순 정렬 (버블 정렬)
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (total[i][1] < total[j][1]) {
                int temp0 = total[i][0];
                int temp1 = total[i][1];
                total[i][0] = total[j][0];
                total[i][1] = total[j][1];
                total[j][0] = temp0;
                total[j][1] = temp1;
            }
        }
    }

    // 3. 출력
    for (int i = 0; i < 8; i++) {
        cout << "Employee " << total[i][0] 
            << " total hours = " << total[i][1] << endl;
    }

    return 0;
}