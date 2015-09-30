/* 
 * File:   Circle.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:15
 */
#include <cmath>
#include "Circle.h"


Circle::Circle() {
    this->radius  = 0.0;
}
Circle::Circle(const Circle& orig) {
}
Circle::Circle(int radius){
    this->radius = radius;
}
Circle::~Circle() {
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}
int Circle::getRadius() const{
    return this->radius;
}
int Circle::getArea() const{
    return M_PI * this->radius * this->radius;
}
int Circle::getPerimeter() const {
    return 2 * M_PI * this->radius;
}
void Circle::print() {

}





