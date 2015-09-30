/* 
 * File:   Square.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:16
 */

#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() {
    Rectangle::SetHeight(0.0);
    Rectangle::SetWidth(0.0);
    Rectangle::setPerimeter();
    Rectangle::setArea();
}

Square::Square(const Square& orig) {
}
Square::Square(float length){
    Rectangle::SetHeight(length);
    Rectangle::SetWidth(length);
    Rectangle::setPerimeter();
    Rectangle::setArea();
}

Square::~Square() {
}

void Square::SetLength(float length) {
    Rectangle::SetHeight(length);
    Rectangle::SetWidth(length);
    Rectangle::setPerimeter();
    Rectangle::setArea();
}

float Square::GetLength() const {
    return Rectangle::GetHeight();
}

void Square::print() {
    cout << "this square : " << endl;
    cout << Shape::getId() << endl;
    cout << Shape::getPerimeter() << endl;
    cout << Shape::getArea() << endl;
    cout << Rectangle::GetHeight() << endl;
}



