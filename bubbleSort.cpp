#include <iostream>
using namespace std;

void bubble(int arr[], int size){
    for (int i = size - 1; i > 0; i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cout << "Enter the element" << endl;
        cin >> arr[i];
    }
    cout << "Array before sorting" << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    bubble(arr, size);
    cout << "Sorted Array:" << endl;
    cout << "Array before sorting" << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}