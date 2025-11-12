#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    string line;
    const double R = 6378.1;
    const double PI = 3.14159265358979;

    cout << "Enter point 1 (latitude and longitude) in degrees: ";
    getline(cin, line);
    replace(line.begin(), line.end(), ',', ' '); // 쉼표를 공백으로 바꿈
    stringstream(line) >> x1 >> y1;

    cout << "Enter point 2 (latitude and longitude) in degrees: ";
    getline(cin, line);
    replace(line.begin(), line.end(), ',', ' ');
    stringstream(line) >> x2 >> y2;

    // 도 → 라디안 변환
    x1 *= PI / 180.0; y1 *= PI / 180.0;
    x2 *= PI / 180.0; y2 *= PI / 180.0;

    double d = R * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));

    cout << "The distance between the two points is " << round(d * 100) / 100 << " km" << endl;

    return 0;
}