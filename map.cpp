#include <iostream>
#include <vector>
#include<map>
using namespace std;

int main(){
    map<string,int>directory;
    directory["A"]=10;
    directory["B"]=55;
    directory["C"]=77;

    for(auto i: directory){
        cout<<"Name "<<i.first<<endl;
        cout<<"Phone "<<i.second<<endl;
    }
}