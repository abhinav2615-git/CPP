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
// int palindrome(int n){
//     int original=n;
//     int revNum=0;
//     int lastDig=0;
//     while(n>0){
//         lastDig=n%10;
//         revNum=(revNum*10)+lastDig;
//         n=n/10;
//     }
//     if(revNum==original){
//         cout<<"The number is palindrome."<<endl;
//     }
//     else{
//         cout<<"Number is not a palindrome."<<endl;
//     }
//     return revNum;
// }
// int main(){
//     int n;
//     cout<<"Enter the number to be checked:"<<endl;
//     cin>>n;
//     cout<<palindrome(n)<<endl;
// }

// Print all Divisors
// void divisors(int n){
//     for(int i=0;i<=sqrt(n);i++){
//         if(n%i==0){
//             cout<<i<<" "<<(n/i)<<endl;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     divisors(n);
// }

// Prime Number check
// void prime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"The number is not prime."<<endl;
//             break;
//         }
//     }
//     cout<<"The number is prime."<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     prime(n);
// }

// Recursion:
// Print name 5 times.
// void name(string str,int n,int i){
//     if(i>n){
//         return;
//     }
//     cout<<str<<endl;
//     name(str,n,i+1);
// }
// int main(){
//     string str;
//     int i=1;
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     cout<<"Enter the string"<<endl;
//     cin>>str;
//     name(str,n,i);
// }

// Print linearly from 1 to n
// void print(int n,int i){
//     if(i>n){
//         return;
//     }
//     cout<<i<<endl;
//     print(n,i+1);
// }
// int main(){
//     int i=1;
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     print(n,i);
// }

// Print linearly from n to 1
// void print(int n,int i){
//     if(n<i){
//         return;
//     }
//     cout<<n<<endl;
//     print(n-1,i);
// }
// int main(){
//     int i=1;
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     print(n,i);
// }
// int sum(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     return n + sum(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     cout << sum(n);
// }

// Factorial of n numbers
int fact(int n){
    if(n<=0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << fact(n);
}