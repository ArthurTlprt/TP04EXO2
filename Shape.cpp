/* 
 * File:   Shape.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:13
 */

#include "Shape.h"

int Shape::counter = -1;

Shape::Shape() {
    id = counter++;
    color = 0;
}

Shape::Shape(const Shape& orig) {
}

Shape::~Shape() {
}

void Shape::print() {

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


