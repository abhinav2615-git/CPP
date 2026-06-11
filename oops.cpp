#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    string dept;
    int salary;
    int pincode;

public:
    Teacher(){
        dept = "Computer Science";
        cout<<"Department allotted : "<<dept<<endl;
    }
    string name;
    int id;

    double setSalary(double s){
        salary = s;
        return salary;
    }
};

int main(){
    Teacher t1;
    cout<<"Enter the name of the teacher:"<<endl;
    cin>>t1.name;
    cout<<"Enter the id of the teacher:"<<endl;
    cin>>t1.id;

    cout<<"The details of the teacher are:"<<endl;
    cout<<t1.name<<endl<<t1.id<<endl;
    cout<<"The salary is: "<<t1.setSalary(25000);
}