/* 
 * File:   Circle.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:15
 */
#include <cmath>
#include "Circle.h"
#include <iostream>

using namespace std;


Circle::Circle() {
    setRadius(0.0);
}
Circle::Circle(const Circle& orig) {
}
Circle::Circle(float radius){
    setRadius(radius);
    setPerimeter();
    setArea();
}
Circle::~Circle() {
}

void Circle::setRadius(float radius) {
    this->radius = radius;
    setPerimeter();
    setArea();
}
float Circle::getRadius() const{
    return this->radius;
}

void Circle::print() {
    cout << "this circle : " << endl;
    cout << Shape::getId() << endl;
    cout << Shape::getPerimeter() << endl;
    cout << Shape::getArea() << endl;
    cout << getRadius() << endl;
}

void Circle::setArea() {
    Shape::setArea(radius * radius * M_PI);
}

void Circle::setPerimeter() {
    Shape::setPerimeter(radius * 2 * M_PI);
}





