#ifndef PERSON_H
#define PERSON_H
#include "Address.h"
#include<iostream>
using namespace std;
 
 class Person{
    private:
    string name,id;
    Address address;
    public:
    Person(Address,string ,string); // two arg constructor
    Person(const Person&); // copy constructor
    bool validate(string&); // validate func header
    friend ostream& operator<<(ostream&,const Person& ); // << operator
    friend istream& operator>>(istream&, Person&); // >> opererator
    Person operator=(const Person&); // operator assingment(=)
    // getter and setter func
    string getname()const;
    void setname(string);
    string getid()const;
    void setid(string);
   

 };


#endif