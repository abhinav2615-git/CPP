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