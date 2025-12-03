#include <iostream>
using namespace std;

class Circle
{
    public:
    //원의 반지름
    double radius;

    //기본 circle 객체 생성
    Circle()
    {
        radius = 1;
    }

    //circle 객체 생성
    Circle(double newRadius)
    {
        radius = newRadius;
    }

    //원의 면적 반환
    double getArea()
    {
        return radius * radius * 3.14159;
    }
}; // 여기에 반드시 세미콜론이 존재해야함

int main()
{
    Circle circle1(1.0);
    Circle circle2(25);
    Circle circle3(125);

    cout << "The area of the circle of radius " << circle1.radius << " is " << circle1.getArea() << endl;
    cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;
    cout << "The area of the circle of radius " << circle3.radius << " is " << circle3.getArea() << endl;

    //원의 반지름 변경
    circle2.radius = 100;
    cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

    return 0;
}