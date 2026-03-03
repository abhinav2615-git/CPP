#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int bt[n], wt[n], tat[n], p[n];

    
    for(int i = 0; i < n; i++) {
        cout << "Enter Burst Time for Process " << i + 1 << ": ";
        cin >> bt[i];
        p[i] = i + 1;  
    }

    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(bt[i] > bt[j]) {
                
                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    
    wt[0] = 0;
    for(int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    
    for(int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    
    float total_wt = 0, total_tat = 0;

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for(int i = 0; i < n; i++) {
        cout << "P" << p[i] << "\t\t" << bt[i] << "\t\t"
             << wt[i] << "\t\t" << tat[i] << endl;

        total_wt += wt[i];
        total_tat += tat[i];
    }

    cout << "\nAverage Waiting Time = " << total_wt / n;
    cout << "\nAverage Turnaround Time = " << total_tat / n;

    return 0;
}