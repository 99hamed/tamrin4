#include "Address.h"
#include<iostream>
using namespace std;

ostream& operator<<(ostream& str,const Address& d ){
str<<d.country<<d.city<<d.street;
return str;
}
istream& operator>>(istream& str, Address& d){
str>>d.country>>d.city>>d.street;
return str;
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
