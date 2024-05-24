#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;
class Point{
private:
int x,y;
public:
Point(int,int); // constructor
Point();
Point(const Point&); // copy constructor
friend Point operator+(const Point&,const Point&); // operator +
friend Point operator-(const Point &,const Point &); // operator -
Point& operator/=(int); // operaator divide and assignment
Point operator=(const Point&); // operator assingment
bool operator>=(const Point &); 
// getter and setter function
int getx()const;
void setx(int);
int gety()const;
void sety(int);
};

#endif