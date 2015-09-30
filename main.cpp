/* 
 * File:   main.cpp
 * Author: isen
 *
 * Created on 30 septembre 2015, 14:49
 */

#include <cstdlib>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Circle circle(8.0);
    Rectangle rectangle(2.0, 4.0);
    Square square(2.0);

    circle.print();
    rectangle.print();
    square.print();
    
    return 0;
}

