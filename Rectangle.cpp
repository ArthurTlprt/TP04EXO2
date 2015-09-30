/* 
 * File:   Rectangle.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:17
 */

#include "Rectangle.h"

Rectangle::Rectangle() {
}
Rectangle::Rectangle(int height, int width){
    this->height = height;
    this->width = width;
}
Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

void Rectangle::SetHeight(int height) {
    this->height = height;
}

int Rectangle::GetHeight() const {
    return height;
}

void Rectangle::SetWidth(int width) {
    this->width = width;
}

int Rectangle::GetWidth() const {
    return width;
}

