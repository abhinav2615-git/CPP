#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string dept;
    int salary;
    int pincode;

public:
    // Non-parameterized Constructor
    Teacher()
    {
        dept = "Computer Science";
        cout << "Department allotted : " << dept << endl;
    }

    // Parameterised Constructor
    Teacher(string n, int i)
    {
        name = n;
        id = i;
    }
    string name;
    int id;

    // Copy Constructor
    Teacher(Teacher &orgObj){
        this->name = orgObj.name;
        this->id = orgObj.id;
        this->salary = orgObj.salary;
    }

    double setSalary(double s)
    {
        salary = s;
        return salary;
    }
    void info()
    {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
    }
};

//Inheritance
class Person{
public:
    int age;
    string name;

    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

    Person(){
        cout<<"Object Created for Person"<<endl;
    }
};

class Student : public Person{
public:
    int rollno;

    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll Number : "<<rollno<<endl;
    }

    Student(){
        cout<<"Object Created for Student."<<endl;
    }
};

int main()
{
    // Teacher t1("Abhinav Gupta", 33);
    // t1.info();
    // cout << "The salary is: " << t1.setSalary(25000)<<endl;
    // Teacher t2(t1);
    // t2.info();

    //Inheritance

    Person p1;
    p1.name = "Abhi";
    p1.age = 21;
    p1.getinfo();

    Student s1;
    s1.name = "Abhinav";
    s1.age = 20;
    s1.rollno = 33;
    s1.getinfo();

    p1.name = "Changed";
    cout << p1.name;
    cout << s1.name;

    return 0;
}