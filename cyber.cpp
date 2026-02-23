#include<iostream>
#include<string>
using namespace std;

string bitStuff(string str){
    int count = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            count++;
        }
        else{
            count = 0;
        }

        if(count == 5){
            str.insert(i+1, "0");
            count = 0;
            i++;
        }
    }

    return str;
}

int main(){
    string str;

    cout<<"Enter the string in bits 0 and 1"<<endl;
    cin>>str;
    for(char c : str){
        if(c!='0' && c!='1'){
            cout<<"Wrong input"<<endl;
            return 0;
        }
    }

    string result = bitStuff(str);

    cout<<"After bit stuffing: "<<result<<endl;

    return 0;
}