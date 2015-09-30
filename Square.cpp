/* 
 * File:   Square.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 15:16
 */

#include "Square.h"

Square::Square() {
}

Square::Square(const Square& orig) {
}

Square::~Square() {
}

void Square::SetLength(int length) {
    this->length = length;
}

int Square::GetLength() const {
    return length;
}

