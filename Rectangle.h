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
    int height;
    int width;
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    Rectangle(int height, int width);
    virtual ~Rectangle();
    void SetHeight(int height);
    int GetHeight() const;
    void SetWidth(int width);
    int GetWidth() const;
};

#endif	/* RECTANGLE_H */

