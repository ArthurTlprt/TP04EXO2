/* 
 * File:   Square.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 15:16
 */

#ifndef SQUARE_H
#define	SQUARE_H

#include "Shape.h"
#include "Rectangle.h"

class Square : public Shape{
public:
    Square();
    Square(const Square& orig);
    virtual ~Square();
    void SetLength(int length);
    int GetLength() const;
    
private:
    int length;
};

#endif	/* SQUARE_H */

