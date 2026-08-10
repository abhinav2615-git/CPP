#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    vector<int>arr;
    for(int i=0;i<size;i++){
        int x;
        cout<<"Enter the elements"<<endl;
        cin>>x;
        arr.push_back(x);
    }

    vector<int>hash={0};
    for(int i =0;i<size;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number"<<endl;
        cin>>number;
        cout<<hash[number]<<endl;
    }
}