#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
using namespace std;

class Address{
    private:
    string country,city,street;
    public:
    Address(string ,string ,string ); // three arg constructor
    Address();// default constructor
    friend ostream& operator<<(ostream&,const Address& ); // operator <<
    friend istream& operator>>(istream&, Address&); // operator >>
    // getter and setter method
    string getcountry()const;
    void setcountry(string);
    string getcity()const;
    void setcity(string);
    string getstreet()const;
    void setsteet(string);
};



#endif