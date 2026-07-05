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

int main(){
    Parent p1;
    p1.getinfo();
    Child c1;
    c1.getinfo();
}