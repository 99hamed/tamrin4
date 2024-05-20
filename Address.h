#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
using namespace std;

class Address{
    private:
    string country,city,street;
    public:
    Address(string a,string b,string c) : country(a),city(b),street(c){}
    friend ostream& operator<<(ostream&,const Address& );
    friend istream& operator>>(istream&, Address&);
    string getcountry()const;
    void setcountry(string);
    string getcity()const;
    void setcity(string);
    string getstreet()const;
    void setsteet(string);
};



#endif