#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>av[4];
    av[0].push_back(10);
    av[0].push_back(20);
    av[0].push_back(30);

    av[1].push_back(40);
    av[1].push_back(50);
    av[1].push_back(60);
    av[1].push_back(70);

    av[2].push_back(80);
    av[2].push_back(90);
    av[2].push_back(100);

    av[3].push_back(110);
    av[3].push_back(120);
    av[3].push_back(130);

    for(int i=0;i<=4;i++){
        for(int j=0;j<av[i].size();j++){
            cout<<av[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
