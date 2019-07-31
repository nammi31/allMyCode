#include<bits/stdc++.h>
using namespace std;
struct Process {
	int pid; /// Process ID
	int art; /// Arrival Time
	int bt; /// Burst Time
	int pri;
};
bool cmp(Process a,Process b)
{
    return a.art<b.art;
}
int main()
{
    Process proc[] = { { 1, 1, 6,1 }, { 2, 1, 8,2 },{ 3, 4, 4,4 }, { 4, 6,2, 3 }, { 5, 25,3, 2 } };
	int n = sizeof(proc) / sizeof(proc[0]);

	sort(proc,proc+n,cmp);
	/// remaining time
	int rt[n];
	for (int i = 0; i < n; i++) rt[i] = proc[i].bt;

	int complete = 0,largest = 0, mx =-1;
	bool check = false;
    int  time = 0;
    int wt[n],tat[n];
    while (complete != n){
        for (int j = 0; j < n; j++) {
            if(proc[j].art<=time && proc[j].pri>mx && rt[j]>0){
                mx=proc[j].pri;
                largest=j;
                check = true;
            }
        }
        time++;
        if (check == false)  continue;
        rt[largest]--;
        if(rt[largest]==0){
            complete++;
            mx=-1;

            wt[largest] = time - proc[largest].bt - proc[largest].art;
            tat[largest]=time - proc[largest].art;
        }
    }

	cout << "Processes    arrival     Burst time           priority        Waiting time      Turn around time\n";
   int smWat=0,smTat=0;
   for (int i = 0; i < n; i++) {
		smWat+=wt[i];
		smTat+= tat[i];
		cout << " " << proc[i].pid<< "\t\t"<< proc[i].art<<"\t\t"<< proc[i].bt << "\t\t " <<proc[i].pri << "\t\t "<< wt[i]<< "\t\t " << tat[i] << endl;
	}

	cout << "\nAverage waiting time = "<< (float)smWat / (float)n;
	cout << "\nAverage turn around time = "<< (float)smTat / (float)n;
	 return 0;
}

/*
id arrival burst  priority
1    1      6     1
2    1      8     2
3    4      4     4
4    6      2     3  */
