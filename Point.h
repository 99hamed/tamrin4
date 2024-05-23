#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;
class Point{
private:
int x,y;
public:
Point(int,int);
Point(const Point&);
friend Point operator+(const Point&,const Point&);
friend Point operator-(const Point &,const Point &);
Point& operator/=(int);
Point operator=(const Point&);
bool operator>=(const Point &);
int getx()const;
void setx(int);
int gety()const;
void sety(int);
};

#endif