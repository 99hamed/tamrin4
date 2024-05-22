#include"Person.h"
#include"Address.h"
#include<iostream>
#include<cstring>
using namespace std;
 
 Person::Person(string a,string b): name(a),id(b){
    if(validate(id)==false)
        cout<<"id is invalid"<<endl;
 }
Person::Person(const Person& a){
    name=a.name;
    id=a.id;
    
}

ostream& operator<<(ostream& str,const Person& d ){
str<<d.name<<d.id;
return str;
}
istream& operator>>(istream& str, Person& d){
str>>d.name>>d.id;
return str;
}
Person Person::operator=(const Person& d){
name=d.name;
id=d.id;
return *this;
}
    string Person::getname()const{
    return name;
}
    void Person::setname(string n){
        name=n;
    }
    string Person::getid()const{
        return id;
    }
    void Person::setid(string i){
        id=i;
    }
     bool Person::validate(string& id){
        int length = id.length();

       
        if (length < 8 || length > 10) return false;  // Check length

        
        int year = std::stoi(id.substr(0, 2)); // Check the first two characters (year of entry)
        if (year < 84 || year > 99) return false;

        
        int nonDigitCount = 0;  // Check the next 1-3 non-digit characters
        for (int i = 2; i < length && !std::isdigit(id[i]); ++i) {
            ++nonDigitCount;
        }
        if (nonDigitCount < 1 || nonDigitCount > 3) return false;

       
        for (int i = length - 5; i < length; ++i) {  // Check the last five characters (digits less than 4 or greater than 6)
            if (std::isdigit(id[i])) {
                int digit = id[i] - '0';
                if (digit >= 4 && digit <= 6) return false;
            } else {
                return false;
            }
        }

        return true;
    }

   