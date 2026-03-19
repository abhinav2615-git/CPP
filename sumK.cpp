#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Enter k: ";
    cin >> k;

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    int sum = 0;
    for (auto &j : freq) {
        if (j.second == k) {
            sum += j.first;
        }
    }

    cout << "Sum = " << sum << endl;
    return 0;
}