#include <iostream>
using namespace std;

int value(char c)
{
    int answer = 0;
    if (c == 'I')
        answer += 1;
    if (c == 'V')
        answer += 5;
    if (c == 'X')
        answer += 10;
    if (c == 'L')
        answer += 50;
    if (c == 'C')
        answer += 100;
    if (c == 'D')
        answer += 500;
    if (c == 'M')
        answer += 1000;

    return answer;
}

int romanToInt(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((i + 1) < s.size() && value(s[i]) < value(s[i + 1]))
        {
            ans -= value(s[i]);
        }

        else
        {
            ans += value(s[i]);
        }
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter the string of roman numeral"<<endl;
    cin>>s;
    int finalAns = romanToInt(s);
    cout<<"The final answer is : "<<finalAns<<endl;
}