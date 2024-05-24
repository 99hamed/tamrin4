#include<iostream>
#include"Address.h"
#include"Employee.h"
#include"Person.h"
#include"Point.h"
#include"Rectangle.h"


using namespace std;

int main(){

   Address addr1("Iran", "Tehran", "Valiasr");
    Address addr2("USA", "New York", "5th Ave");

    Person person1(addr1,"Ali", "98abd35878");
    Person person2(addr2,"John", "99abd58789");

    Employee emp1(addr1,"Ali", "98*ab34577", 40, 50, 100, 80);
    Employee emp2(addr2,"John", "99*ag45978", 35, 60, 90, 70);

    cout << emp1 << endl;
    cout << "Salary: " << emp1.calculateSalary() << endl;
   cout << "Efficiency: " << emp1.efficiency() << endl;

    Point p1(0, 0);
    Point p2(3, 4);

    Point p3 = p1 + p2;
    cout << "Point p3: (" << p3.getx() << ", " << p3.gety() << ")" <<endl;

    Rectangle rect1(p1, 10, 20);
    Rectangle rect2(p1, 15, 25);

    Rectangle rect3 = rect1 / rect2;
    cout << "Rectangle rect3: Start Point (" << rect3.getStartPoint().getx() << ", " << rect3.getStartPoint().gety()
              << "), Width: " << rect3.getwidth() << ", Height: " << rect3.getheight() << std::endl;

      if(rect1.collisionDetection(rect1,rect2))
      cout<<"yes it has accident";

    return 0;
}