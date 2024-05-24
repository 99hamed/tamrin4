#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee(Address address,string n,string i,int a=0,int b=0,int c=0,int d=0): address(address),name(n),id(i),hourWork(a),salaryPerHour(b),workToDo(c),workDone(d){
if(validate(id)==false){
cout<<"invalid id"<<endl;
exit(0);}
}

Employee::Employee (const Employee& other){
     hourWork=other. hourWork;
     salaryPerHour=other.salaryPerHour;
     workToDo=other.workToDo;
     workDone=other.workDone;
     name=other.name;
     id=other.id;
     address=other.address;
     
}
ostream& operator<<(ostream& str,const Employee& employee ){
 str << employee.name << employee.id <<  employee.address
            << employee.hourWork << employee.salaryPerHour
             <<employee.workToDo << employee.workDone<<endl;
return str;
}
istream& operator>>(istream& str, Employee& employee){
str >> employee.name >> employee.id >>employee.address
            >>employee.hourWork >> employee.salaryPerHour
             >>employee.workToDo >>employee.workDone;
return str;
}
Employee Employee::operator=(const Employee& other){
hourWork=other.hourWork;
salaryPerHour=other.salaryPerHour;
workToDo=other.workToDo;
workDone=other.workDone;
name=other.name;
id=other.id;
address=other.address;
return *this;
}
    string Employee::getname()const{return name;}
    void Employee::setname(string a) {name=a;}

    string Employee::getid()const{return id;}
    void Employee::setid(string a){id=a;}

    int Employee::hourwork()const{return hourWork;}
    void Employee::hourwork(int d){ hourWork=d;}

    int Employee::getsalaryperhour()const{return salaryPerHour;}
    void Employee::salaryperhour(int d){salaryPerHour=d;}

    int Employee::getworktodo()const{ return workToDo; }
    void Employee::setworktodo(int d){ workToDo=d; }

    int Employee::getworkdone()const{return workDone; }
    void Employee::setworkdone(int d){ workDone=d;}

int Employee::calculateSalary() {
        int baseSalary = hourWork * salaryPerHour;
        int workNotDone = workToDo - workDone;
        double deduction = (double(workNotDone) / workToDo) * baseSalary;
        return baseSalary - deduction;
    }

double Employee::efficiency() {
        return double(workDone) / (hourWork == 0 ? 1 : hourWork);
    }
bool Employee::validate(string& id)  {
        int length = id.length();

        // Check length
        if (length < 8 || length > 10) return false;

        // Check the first two characters (year of entry)
        int year = std::stoi(id.substr(0, 2));
        if (year < 84 || year > 99) return false;
        // check * character
        if(id[2]!='*') return false;
        // Check the next 1-3 non-digit characters
        int nonDigitCount = 0;
        for (int i = 3; i < length && !std::isdigit(id[i]); ++i) {
           
            ++nonDigitCount;
        }
        if (nonDigitCount < 1 || nonDigitCount > 3) return false;
        
        // Check the last five characters (digits less than 4 or greater than 6)
        for (int i = length - 5; i < length; ++i) {
            if (std::isdigit(id[i])) {
                int digit = id[i] - '0';
                if (digit >= 4 && digit <= 6) return false;
            } else {
                return false;
            }
        }

        return true;
    }

    
