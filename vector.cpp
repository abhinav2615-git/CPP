#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1,v2,v3,v4;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v2.push_back(40);
    v2.push_back(50);
    v2.push_back(60);
    v2.push_back(70);
    v3.push_back(80);
    v3.push_back(90);
    v3.push_back(100);
    v4.push_back(110);
    v4.push_back(120);
    v4.push_back(130);

    vector<vector<int>>vv;
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    vv.push_back(v4);


    for(int i=0;i<=4;i++){
        for(int j=0;j<vv[i].size();j++){
            cout<<vv[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
