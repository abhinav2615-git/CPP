#include <iostream>
using namespace std;

void reverse(int i, vector<int> &v1, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(v1[i], v1[n - i - 1]);
    reverse(i + 1, v1, n);
}
int main()
{
    vector<int> v1;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl<< "Reversed array" << endl;
    reverse(0,v1,n);
    for(int x:v1){
        cout<<x<<" ";
    }
    // for(int i=0;i<=n/2;i++){
    //     swap(v1[i],v1[n-1]);
    //     n--;
    // }
    // for (int x : v1)
    // {
    //     cout << x << " ";
    // }
}