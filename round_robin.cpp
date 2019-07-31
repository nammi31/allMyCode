#include<bits/stdc++.h>
using namespace std;
struct Process {
	int pid; /// Process ID
	int art; /// Arrival Time
	int bt; /// Burst Time
};
bool cmp(Process a,Process b)
{
    if(a.art==b.art) return a.bt<b.bt;
    return a.art<b.art;
}
int main()
{
    Process proc [] = { { 1, 4, 3},{ 2, 7,1},{ 3, 0, 4 }, { 4, 2, 2}, { 5, 6,6}  };
		int n = sizeof(proc) / sizeof(proc[0]);

	sort(proc,proc+n,cmp);
	/// remaining time
	int rt[n],i;
	for (int i = 0; i < n; i++) rt[i] = proc[i].bt;

	int time_slice=3;
	int time,complete=0,finished=0;
	int wt[n],tat[n];
	 for(time = 0, i = 0; complete != n;)
      {
            if(rt[i] <= time_slice && rt[i] > 0)
            {
                  time += rt[i];
                  rt[i] = 0;
                  finished = 1;
            }
            else if(rt[i] > 0)
            {
                  rt[i] -= time_slice;
                  time += time_slice;
            }
            if(rt[i] == 0 && finished == 1)
            {
                  complete++;
                  wt[i]= time - proc[i].art - proc[i].bt;
                  tat[i] = time - proc[i].art;
                  finished = 0;
            }
            if(i == n - 1) i = 0;
            else if(proc[i + 1].art <= time) i++;
            else i = 0;

      }
      cout << "Processes    arrival     Burst time       Waiting time      Turn around time\n";
       int smWat=0,smTat=0;
       for (int i = 0; i < n; i++) {
		smWat+=wt[i];
		smTat+= tat[i];
		cout << " " << proc[i].pid<< "\t\t"<< proc[i].art<<"\t\t"<< proc[i].bt << "\t\t "<< wt[i]<< "\t\t " << tat[i] << endl;
       }
       cout << "\nAverage waiting time = "<< (float)smWat / (float)n;
	cout << "\nAverage turn around time = "<< (float)smTat / (float)n;
	 return 0;
}

