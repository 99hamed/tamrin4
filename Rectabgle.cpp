#include"Rectangle.h"

Rectangle::Rectangle(Point s,int a=0,int b=0): startPoint(s),width(a),height(b){}
Rectangle::Rectangle(const Rectangle& other){
    width=other.width;
    height=other.height;

}
Rectangle& Rectangle::operator+=(const Rectangle& other){
     if (startPoint.getx() != other.startPoint.getx() || startPoint.gety() != other.startPoint.gety()) {
           cout << "Error: Rectangles do not have the same start point" << endl;
            return *this;
        }

    
    width=(width>=other.width? width:other.width);
    height=(height>=other.height? height:other.height);
    return *this;
}

Rectangle& Rectangle::operator-=(const Rectangle & other){
        if (startPoint.getx() != other.startPoint.getx() || startPoint.gety() != other.startPoint.gety()) {
           cout << "Error: Rectangles do not have the same start point" << endl;
            return *this;
        }
    
    width=(width<=other.width? width:other.width);
    height=(height<=other.height? height:other.height);
    return *this;
    } 
Rectangle operator/ (const Rectangle& a,const Rectangle& b){
   
   Point midPoint((a.startPoint.getx() + b.startPoint.getx()) / 2,
                       (a.startPoint.gety() + b.startPoint.gety()) / 2);

   int nWidth = a.width/b.width;
   int nHeight = a.height/b.height;
    return Rectangle(midPoint, nWidth, nHeight);

} 
int Rectangle::getwidth()const{ return width;}
void Rectangle::setwidth(int a){ width=a;}
int Rectangle::getheight()const{ return height;}
void Rectangle::setheight(int a){ height=a;}
Point Rectangle::getStartPoint() const{ return startPoint; }
void Rectangle::setStartPoint(const Point& startPoint) { this->startPoint = startPoint; }
 // check if the rectangle has accident
bool Rectangle::collisionDetection(const Rectangle & a,const Rectangle & b){
    if(a.startPoint.getx() + a.width <= b.startPoint.getx() ||b.startPoint.getx() + b.width <= a.startPoint.getx() ||
       a.startPoint.gety() + height <= b.startPoint.gety() ||
       b.startPoint.gety() + b.height <= a.startPoint.gety())
       return false;
    else return true;
}


