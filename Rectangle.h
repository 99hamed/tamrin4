#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Point.h"
class Rectangle{
private:
Point startPoint;
 int width,height;
public:
Rectangle(int,int);
Rectangle(const Rectangle&);
Rectangle& operator+=(const Rectangle&);
Rectangle& operator-=(const Rectangle &);
friend Rectangle operator/ (const Rectangle& ,const Rectangle &);
int getwidth()const;
void setwidth(int);
int getheight()const;
void setheight(int);
bool collisionDetection(const Rectangle &,const Rectangle &);
};


#endif
