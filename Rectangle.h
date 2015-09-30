/* 
 * File:   Rectangle.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 15:17
 */

#ifndef RECTANGLE_H
#define	RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
private:
    float height;
    float width;
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    Rectangle(float height, float width);
    virtual ~Rectangle();
    void SetHeight(float height);
    float GetHeight() const;
    void SetWidth(float width);
    float GetWidth() const;
    void setArea();
    void setPerimeter();
    void print();
};

#endif	/* RECTANGLE_H */

