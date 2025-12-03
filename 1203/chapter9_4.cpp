#include "Circle.h"

// 기본 Circle 객체 생성
Circle::Circle()
{
    radius = 1;
}

// 반지름을 받아 Circle 객체 생성
Circle::Circle(double newRadius)
{
    radius = newRadius;
}

// 원의 면적 반환
double Circle::getArea()
{
    return radius * radius * 3.14159;
}