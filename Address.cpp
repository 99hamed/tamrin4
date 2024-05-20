#include "Address.h"
#include<iostream>
using namespace std;

Address::ostream& operator<<(ostream& str,const Address& d ){
str<<d.country<<d.city<<d.street;
}
Address::istream& operator>>(istream& str, Address& d){
str>>d.country>>d.city>>d.street;
}
    string Address::getcountry()const{
    return country;
    }
    void Address::setcountry(string name){
        country=name;
    }
    string Address::getcity()const{
        return city;
    }
    void Address::setcity(string name ){
        city=name;
    }
    string Address::getstreet()const{
        return street;
    }
    void Address::setsteet(string name ){

        street=name;
    }
    