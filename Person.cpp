#include "Person.h"
#include<iostream>
using namespace std;
 
 Person:: Person(string n,string i,Address a): name(n),id(i),address(a){
        validate(id);
    }
 Person::Person(const Person& a){
        name=a.name;
        id=a.id;
        address=a.address;
        }