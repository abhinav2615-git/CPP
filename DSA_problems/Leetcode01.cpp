// Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
};

int main(){
    vector<int>num;
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    int targ;
    cout<<"Enter the target element"<<endl;
    cin>>targ;

    cout<<"Enter the elemnts"<<endl;
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    vector<int>ans=TwoSum(num,targ);
    cout<<"The indices are:"<<endl;
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}