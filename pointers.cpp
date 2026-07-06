#include <iostream>
using namespace std;

//Pass by Refernce
void changeX(int* ptr){
    *ptr = 20;
}

int main(){

    //Pointers
    // int x = 12;
    // int* ptr = &x;
    // cout<<ptr<<endl;
    // cout<<&x<<endl;

    //Pointers to Pointers
    // int y = 10;
    // int* ptr = &y;
    // int** ptr2 = &ptr;
    // cout << &y << endl;
    // cout << ptr << endl;
    // cout << ptr2 << endl;

    //Practice Question
    // int a = 5;
    // int *p = &a;
    // int **q = &p;
    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;

    //Pass by Reference
    int x = 10;
    changeX(&x);
    cout << x << endl;
}