#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;

    
};

bool compare(Process a, Process b) {
    return a.at < b.at;
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    Process p[n];

    for(int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "\nEnter Arrival Time for P" << p[i].pid << ": ";
        cin >> p[i].at;
        cout << "Enter Burst Time for P" << p[i].pid << ": ";
        cin >> p[i].bt;
    }
    sort(p, p + n, compare);

    int currentTime = 0;
    float totalWT = 0, totalTAT = 0;

    for(int i = 0; i < n; i++) {
        if(currentTime < p[i].at)
            currentTime = p[i].at;

        p[i].ct = currentTime + p[i].bt;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;

        currentTime = p[i].ct;

        totalWT += p[i].wt;
        totalTAT += p[i].tat;
    }

    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
    for(int i = 0; i < n; i++) {
        cout << "P" << p[i].pid << "\t"
             << p[i].at << "\t"
             << p[i].bt << "\t"
             << p[i].ct << "\t"
             << p[i].tat << "\t"
             << p[i].wt << endl;
    }

    cout << "\nAverage Waiting Time = " << totalWT / n;
    cout << "\nAverage Turnaround Time = " << totalTAT / n;

    return 0;
}
