#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    for (int i = 0; i < strs[0].size(); i++)
    {
        char currentChar = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[j][i] != currentChar)
            {
                return ans;
            }
        }
        ans += currentChar;
    }
    return ans;
}

int main(){
    vector<string> strs;
    int size;
    cout<<"Enter the number of strings"<<endl;
    cin>>size;
    cout<<"Enter the list of strings : "<<endl;
    for(int i = 0;i<size;i++){
        string x;
        cin>>x;
        strs.push_back(x);
    }
    string ans = longestCommonPrefix(strs);
    cout<<"The longest common prefix is : "<<ans<<endl;
}