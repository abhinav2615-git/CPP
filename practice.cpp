#include <iostream>
using namespace std;

// {
    // vector<int>v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // vector<pair<int,int>>p;
    // p.emplace_back(1,2);
    // for(int i=0;i<p.size();i++){
    //     cout<<p[i].first<<endl;
    // }

    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // vector<int>::iterator it ;
    // for(it= v.begin();it<=v.end();it++){
    //     cout<<*(it)<<endl;
    // }
// }

// Reverse a number
// int reverse(int n){
//     int revNum=0;
//     int lastDig=0;
//     while(n>0){
//         lastDig=n%10;
//         revNum=(revNum*10)+lastDig;
//         n=n/10;
//     }
//     return revNum;
// }
// int main(){
//     int n;
//     cout<<"Enter the number:"<<endl;
//     cin>>n;
//     cout<<reverse(n)<<endl;
// }


// Check Palindrome
int palindrome(int n){
    int original=n;
    int revNum=0;
    int lastDig=0;
    while(n>0){
        lastDig=n%10;
        revNum=(revNum*10)+lastDig;
        n=n/10;
    }
    if(revNum==original){
        cout<<"The number is palindrome."<<endl;
    }
    else{
        cout<<"Number is not a palindrome."<<endl;
    }
    return revNum;
}
int main(){
    int n;
    cout<<"Enter the number to be checked:"<<endl;
    cin>>n;
    cout<<palindrome(n)<<endl;
}