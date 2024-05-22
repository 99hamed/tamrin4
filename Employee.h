#ifndef EMPLOYEE_H
#define EMPLYEE_H
#include<iostream>
#include"Address.h"
using namespace std;
class Employee {
private:
int hourWork,salaryPerHour,WorToDo,workDone;
public:
string name;
string id;
Address address;
Employee (int,int,int,int);
Employee (string ,string);
Employee (const Employee&);
friend ostream& operator<<(ostream&,const Employee&);
friend istream& operator>>(istream&,Employee&);
Employee operator=(const Employee &);
    string getname()const;
    void setname(string);

    string getid()const;
    void setid(string);

    int hourwork()const;
    void hourwork(int);

    int getsalaryperhour()const;
    void salaryperhour(int);

    int getworktodo()const;
    void setworktodo(int);

    int getworkdone()const;
    void setworkdone(int);

    bool validate(string);
    void calculateSalary();
    void efficiency();
    

};

#endif