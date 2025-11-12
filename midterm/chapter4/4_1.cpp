#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r;
    cout << "Enter the length from the center to a vertex: ";
    cin >> r;

    double s = 2 * r * sin(M_PI / 5);

    double area = (5 * pow(s, 2) / (4 * tan(M_PI / 5)));

    cout << "The area of the pentagon is " << area << endl;

    return 0;
}