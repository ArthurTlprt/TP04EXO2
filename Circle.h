/* 
 * File:   Circle.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 15:15
 */

#ifndef CIRCLE_H
#define	CIRCLE_H

#include "Shape.h"

class Circle :public Shape{
private:
    float radius;
public:
    Circle();
    Circle(const Circle& orig);
    Circle(int radius);
    virtual ~Circle();
    void setRadius(int radius);
    int getRadius()const;
    int getArea()const;
    int getPerimeter()const;
    void print();
};

#endif	/* CIRCLE_H */

