#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Point.h"
class Rectangle{
private:
Point startPoint;
 int width,height;
public:
Rectangle(Point,int,int); // constructor two arg
Rectangle();
Rectangle(const Rectangle&); // copy constructor
Rectangle& operator+=(const Rectangle&); // operator + and assignment
Rectangle& operator-=(const Rectangle &); // operator - and assignmet
 friend Rectangle operator/ (const Rectangle&,const Rectangle&); // operator divide
// getter and setter method
int getwidth()const;
void setwidth(int);
int getheight()const;
void setheight(int);
Point getStartPoint()const;
void setStartPoint(const Point&);

bool collisionDetection(const Rectangle &,const Rectangle &); // check if the rectangle has accident
};


#endif
