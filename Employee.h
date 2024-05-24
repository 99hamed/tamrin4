#ifndef EMPLOYEE_H
#define EMPLYEE_H
#include<iostream>
#include"Address.h"
using namespace std;
class Employee {
private:
int hourWork,salaryPerHour,workToDo,workDone;
public:
string name;
string id;
Address address;
Employee (Address,string,string,int,int,int,int); // constructor
Employee (const Employee&); // copy constructor
friend ostream& operator<<(ostream&,const Employee&); // << operator
friend istream& operator>>(istream&,Employee&); // >>operator
Employee operator=(const Employee &); // assingment operator(=)
// getter and setter header
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
// our function header
bool validate(string&);
int calculateSalary();
double efficiency();


};

#endif