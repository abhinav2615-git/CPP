#include <iostream>
using namespace std;

int main(){

    //Pointers
    // int x = 12;
    // int* ptr = &x;
    // cout<<ptr<<endl;
    // cout<<&x<<endl;

    //Pointers to Pointers
    int y = 10;
    int* ptr = &y;
    int** ptr2 = &ptr;

    cout << &y << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;
}