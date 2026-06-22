#include <iostream>
#include <iomanip>
using namespace std;


class Shape {
public:
    virtual double area() const = 0;  
    virtual ~Shape() {}               
};


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};


class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};


class Triangle : public Shape {
private:
    double bottom, height;
public:
    Triangle(double b, double h) : bottom(b), height(h) {}
    double area() const override {
        return 0.5 * bottom * height;
    }
};

int main() {

    Circle circle(12.6);
    Rectangle rect(4.5, 8.4);
    Triangle tri(4.5, 8.4);


    Shape* shapes[3] = { &circle, &rect, &tri };

    double sum = 0.0;
    for (int i = 0; i < 3; ++i) {
        sum += shapes[i]->area();
    }

    cout << fixed << setprecision(3) << sum << endl;

    return 0;
}
