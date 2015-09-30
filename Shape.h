/* 
 * File:   Shape.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 15:13
 */

#ifndef SHAPE_H
#define	SHAPE_H

class Shape {
private:
    int id;
    int color;
    static int counter;
    float area;
    float perimeter;
public:
    Shape();
    Shape(const Shape& orig);
    virtual ~Shape();
    void print();
    void setColor(int color);
    int getColor() const;
    void setId(int id);
    int getId() const;
    float getArea()const;
    float getPerimeter()const;
    void setPerimeter(float perimeter);
    void setArea(float area);
};

#endif	/* SHAPE_H */

