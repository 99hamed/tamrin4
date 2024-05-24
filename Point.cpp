#include"Point.h"
#include<cmath>
Point::Point(int a,int b): x(a),y(b){}
Point::Point(): x(0),y(0){}
Point::Point(const Point & P){
x=P.x;
y=P.y;
}
Point operator+(const Point& a,const Point& b){
int nx=a.x+b.x;
int ny=a.y+b.y;
return Point(nx,ny);
}
 Point operator-(const Point & a,const Point & b){
int nx=a.x-b.x;
int ny=a.y-b.y;
return Point(nx,ny);
 }
Point& Point::operator/=(int num){
if (num==0){
cout<<"invalid number";
return *this;}

else{
    x/=num;
    y/=num;
}
return *this;
}
Point Point::operator=(const Point& a){
x=a.x;
y=a.y;
return *this;
}
bool Point::operator>=(const Point & a){
int size1,size2;
size1=sqrt((x*x)+(y*y));
size2=sqrt((a.x*a.x)+(a.y*a.y));
if(size1>=size2)
return true;
else return false;

}
int Point::getx()const{ return x; }
void Point::setx(int a){x=a; }
int Point::gety()const{ return y;}
void Point::sety(int a){ y=a;}