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
    Person(string n,string i,Address a): name(n),id(i),address(a){
        validate(id);
    }
    Person(const Person& a){
        name=a.name;
        id=a.id;
        address=a.address;
    }
    bool validate(string);
    


 };


#endif