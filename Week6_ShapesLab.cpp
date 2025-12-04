#include <iostream>
#include <math.h>
#include <cassert>
using namespace std;

class Shape{
public:

    virtual double getArea() = 0;

    virtual double getPerimeter() = 0;

};


class Circle : public Shape{
private:
    double radius;

public:
// Area Formula: 3.141593 · r2
// Perimeter Formula: 2 * 3.141593 * r

    Circle(double r){
        r = radius;
    }
    
    double getArea(){
        return (3.141593 * pow(radius, 2));
    }
    
    double getPerimeter(){
        return (2 * 3.141593 * radius);
    }
};


class Rectangle : public Shape{
private:
    double length, width;

public:
// Area Formula: (Length * Width)
// Perimeter Formula: (length * 2) + (width * 2)

    Rectangle(double l, double w){
        l = length;
        w = width;
    }

    double getArea(){
        return length * width;
    }

    double getPerimeter(){
        return (length * 2) + (width * 2);
    }
};


class RightTriangle : public Shape{
private:
    double base, height, hypotenuse;

public:
// Area Formula: (Base * Height)/2
// Perimeter Formula: a + b + c

    RightTriangle(double b, double h, double hyp){
        b = base;
        h = height;
        hyp = hypotenuse;
    }

    double getArea(){
        return (base * height)/2;
    }

    double getPerimeter(){
        return base + height + hypotenuse;
    }
};

int main(){

    Circle c(5);
    c.getArea();
    c.getPerimeter();

    Rectangle r(10, 3);
    r.getArea();
    r.getPerimeter();

    RightTriangle rt(4, 5, 6);
    rt.getArea();
    rt.getPerimeter();

    return 0;
}


