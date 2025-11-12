#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4] =
    {{1, 2, 3, 4,},
    {4, 5, 6, 7},
    {8, 9, 10, 11},
    {12, 13, 14, 15}};

    int sum = 0;

    for (int i =0; i < 4; i++)
        sum += matrix[i][i];

    cout << sum << endl;

    return 0;
}