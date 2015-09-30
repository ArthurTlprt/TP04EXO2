/* 
 * File:   Rectangle.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:17
 */

#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
}
Rectangle::Rectangle(float height, float width){
    SetHeight(height);
    SetWidth(width);
    setPerimeter();
    setArea();
}
Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

void Rectangle::SetHeight(float height) {
    this->height = height;
    setPerimeter();
    setArea();
}

float Rectangle::GetHeight() const {
    return height;
}

void Rectangle::SetWidth(float width) {
    this->width = width;
    setPerimeter();
    setArea();
}

float Rectangle::GetWidth() const {
    return width;
}

void Rectangle::setArea() {
    Shape::setArea(GetWidth()*GetHeight());
}

void Rectangle::setPerimeter() {
    Shape::setPerimeter(GetHeight()+GetWidth());
}

void Rectangle::print() {
    cout << "this rectangle : " << endl;
    cout << Shape::getId() << endl;
    cout << Shape::getPerimeter() << endl;
    cout << Shape::getArea() << endl;
    cout << GetWidth() << endl;
}

