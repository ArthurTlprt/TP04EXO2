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
    
    void setPerimeter();
    void setArea();
public:
    Circle();
    Circle(const Circle& orig);
    Circle(float radius);
    virtual ~Circle();
    void setRadius(float radius);
    float getRadius()const;
    void print();
};

#endif	/* CIRCLE_H */

