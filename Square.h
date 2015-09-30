/* 
 * File:   Square.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 15:16
 */

#ifndef SQUARE_H
#define	SQUARE_H


#include "Rectangle.h"

class Square : public Rectangle{
public:
    Square();
    Square(const Square& orig);
    Square(float length);
    virtual ~Square();
    void SetLength(float length);
    float GetLength() const;
    void print();
};

#endif	/* SQUARE_H */

