#include <iostream>
using namespace std;

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
    cout<<endl<<"Reversed array"<<endl;
    for(int i=0;i<n/2;i++){
        swap(v1[i],v1[n-1]);
        n--;
    }
    for (int x : v1)
    {
        cout << x << " ";
    }
}