#include<iostream>
#include<string.h>
using namespace std;

//Function Overriding & Virtual Function
class Parent{
public:
    virtual void getinfo(){
        cout<<"This is parent class."<<endl;
    }
};

class Child : public Parent{
public:
    void getinfo(){
        cout<<"This is child class."<<endl;
    }
};

// Abstract Class
class Shape{
public:
    virtual void draw() = 0; //Pure Abstract Function
};

class Circle : public Shape{
public: 
    void draw(){
        cout<<"Draw a circle."<<endl;
    }
};

//Static Keyword
void fun(){
     static int x = 0;
    cout<<"X : "<<x<<endl;
    x++;
}

int main(){
    // Parent p1;
    // p1.getinfo();
    // Child c1;
    // c1.getinfo();

    //Abstract Class
    // Circle c1;
    // c1.draw();

    //Static Keyword
    fun();
    fun();
    fun();
    fun();
    fun();
}