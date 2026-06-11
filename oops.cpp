#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    string dept;
    int salary;
    int pincode;

public:
    // Non-parameterized Constructor
    Teacher(){
        dept = "Computer Science";
        cout<<"Department allotted : "<<dept<<endl;
    }

    // Parameterised Constructor
    Teacher(string n, int i){
        name = n;
        id = i;
    }
    string name;
    int id;

    double setSalary(double s){
        salary = s;
        return salary;
    }
    void info(){
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
    }
};

int main(){
    Teacher t1("Abhinav Gupta", 33);
    t1.info();
    cout<<"The salary is: "<<t1.setSalary(25000);
}