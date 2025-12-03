#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle circle1;
    Circle circle2(5.0);

    cout << "The area of the circle of radius " << circle1.radius << " is " << circle1.getArear() << endl;
    cout << " The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

    //원의 반지름 변경
    circle2.radius = 100;
    cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

    return 0;
}