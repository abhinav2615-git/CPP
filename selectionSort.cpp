#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int selection(int arr[], int size)
{
    for (int i = 0; i < size - 2; i++)
    {
        int minIndex = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void bubble(int arr[], int size){
    for (int i = size - 1; i > 0; i--){
        int swapCount=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapCount=1;
            }
        }
        if(swapCount==0){
            break;
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    selection(arr, size);

    cout << endl
         << "Array after sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}