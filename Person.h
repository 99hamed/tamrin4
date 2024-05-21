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
    Person(string ,string );
    Person(const Person&);
    bool validate(string);
    friend ostream& operator<<(ostream&,const Address& );
    friend istream& operator>>(istream&, Address&);
    Person operator=(const Person&);
    string getname()const;
    void setname(string);
    string getid()const;
    void setid(string);
   

 };


#endif