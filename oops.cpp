#include <iostream>
#include <string>
using namespace std;

class Teacher1{
private:
    string dept;
    int salary;
    int pincode;

public:
    // Non-parameterized Constructor
    Teacher1()
    {
        dept = "Computer Science";
        cout << "Department allotted : " << dept << endl;
    }

    // Parameterised Constructor
    Teacher1(string n, int i)
    {
        name = n;
        id = i;
    }
    string name;
    int id;

    // Copy Constructor
    Teacher1(Teacher1 &orgObj){
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
    ~Person(){
        cout<<"Destructor is called for Parent class."<<endl;
    }
};

class Student1 : public Person{
public:
    int rollno;

    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll Number : "<<rollno<<endl;
    }

    Student1(){
        cout<<"Object Created for Student."<<endl;
    }
    ~Student1(){
        cout<<"Destructor is called for Child class."<<endl;
    }
};

//Multiple-Inheritance
class Student2{
public:
    string name;
    int roll;
};

class Teacher2{
public:
    string subject;
    double salary;
};

class TeacherAssistant : public Student2, public Teacher2{
public:
    string branch;

    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary : "<<salary<<endl;
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
    // Person p1;
    // p1.name = "Abhi";
    // p1.age = 21;
    // p1.getinfo();
    // Student1 s1;
    // s1.name = "Abhinav";
    // s1.age = 20;
    // s1.rollno = 33;
    // s1.getinfo();
    // p1.name = "Changed";
    // cout << p1.name<<endl;;
    // cout << s1.name<<endl;;

    //Multiple-Inheritance
    TeacherAssistant ta1;
    ta1.name = "Abhinav";
    ta1.roll = 33;
    ta1.subject = "Computer Science";
    ta1.salary = 89003.54;
    ta1.getinfo();

    return 0;
}