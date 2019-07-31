
/// https://www.geeksforgeeks.org/program-shortest-job-first-scheduling-set-2srtf-make-changesdoneplease-review/
#include <bits/stdc++.h>
using namespace std;

struct Process {
	int pid; // Process ID
	int bt; // Burst Time
	int art; // Arrival Time
};
int main()
{
	Process proc[] = { { 1, 6, 1 }, { 2, 8, 1 },
					{ 3, 7, 2 }, { 4, 3, 3 } };
	int n = sizeof(proc) / sizeof(proc[0]);
   /// remaining time
    int rt[n];
	for (int i = 0; i < n; i++) rt[i] = proc[i].bt;

	int complete = 0,shortest = 0, minm = INT_MAX;
	bool check = false;
    int  time = 0;
    int tat[n],wt[n];
	while (complete != n) {
            ///find shortest job within the time
		for (int j = 0; j < n; j++) {
			if ((proc[j].art <= time) && (rt[j] < minm) && rt[j] > 0) {
				minm = rt[j]; shortest = j; check = true;
			}
		}
		time++;
		if (check == false)  continue;
		rt[shortest]--;

		/// Update minimum
		minm = rt[shortest];
		if (minm == 0) minm = INT_MAX;

		/// If a process gets completely executed
		if (rt[shortest] == 0) {
			complete++;
		    ///	finishing time = time and Calculate waiting time
			wt[shortest] = time - proc[shortest].bt - proc[shortest].art;
			if (wt[shortest] < 0)  wt[shortest] = 0;
            ///calculate turn around time
			tat[shortest]=time- proc[shortest].art;
		}

	}
   cout << "Processes  Burst time  Waiting time  Turn around time\n";
   int smWat=0,smTat=0;
   for (int i = 0; i < n; i++) {
		smWat+=wt[i];
		smTat+= tat[i];
		cout << " " << proc[i].pid << "\t\t"<< proc[i].bt << "\t\t " << wt[i]<< "\t\t " << tat[i] << endl;
	}

	cout << "\nAverage waiting time = "<< (float)smWat / (float)n;
	cout << "\nAverage turn around time = "<< (float)smTat / (float)n;
	return 0;
}

