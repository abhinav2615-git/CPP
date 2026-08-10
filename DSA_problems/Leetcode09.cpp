#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        long long original = x;
        long long reverse = 0;
        if (x < 0) {
            return false;
        }
        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x=x/10;
        }
        if (original == reverse) {
            return true;
        }
        return false;
    }

int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    bool a= isPalindrome(x);
    cout<<"Is palindrome?"<<endl<<a;
}