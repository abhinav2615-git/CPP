#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    // vector<vector<int>>vv(10,vector<int>(5,10));
    // for(int i=0;i<vv.size();i++){
    //     for(int j=0;j<vv[i].size();j++){
    //         cout<<vv[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // pair<int,string>p;
    // p={10,"Abhinav"};
    // cout<<p.first;
    // cout<<" ";
    // cout<<p.second;


    // vector<pair<int,string>>v;
    // v.push_back({10,"A"});
    // v.push_back({20,"B"});
    // v.push_back({30,"C"});
    // v.push_back({40,"D"});
    // v.push_back({50,"E"});

    // for(int i =0;i<v.size();i++){
    //     pair<int,string>p;
    //     p=v[i];
    //     cout<<p.first;
    //     cout<<" ";
    //     cout<<p.second;
    // }


    queue<pair<int,string>>Q;
    Q.push({10,"A"});
    Q.push({20,"B"});
    Q.push({30,"C"});
    Q.push({40,"D"});
    Q.push({50,"E"});
    Q.push({60,"F"});
    Q.push({70,"G"});
    Q.push({80,"H"});
    Q.push({90,"I"});

    while(!Q.empty()){
        pair<int,string>P;
        P=Q.front();
        cout<<P.first<<", "<<P.second<<endl;
        Q.pop();
    }
}