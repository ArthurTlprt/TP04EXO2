/* 
 * File:   Shape.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:13
 */

#include "Shape.h"
#include <iostream>

using namespace std;

int Shape::counter = 0;

Shape::Shape() {
    id = counter++;
    color = 0;
}

Shape::Shape(const Shape& orig) {
}

Shape::~Shape() {
}

void Shape::print() {
    cout << id << endl;
}

void Shape::setColor(int color) {
    this->color = color;
}

int Shape::getColor() const {
    return color;
}

void Shape::setId(int id) {
    this->id = id;
}

int Shape::getId() const {
    return id;
}

float Shape::getArea() const {
    return this->area;
}

float Shape::getPerimeter() const {
    return this->perimeter;
}

void Shape::setPerimeter(float perimeter) {
    this->perimeter = perimeter;
}

void Shape::setArea(float area) {
    this->area = area;
}



