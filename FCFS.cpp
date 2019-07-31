#include<bits/stdc++.h>
using namespace std;
struct Process {
	int pid; /// Process ID
	int bt; /// Burst Time
	int art; /// Arrival Time
};

bool cmp(Process a,Process b)
{
    if(a.art==b.art) return a.bt<b.bt;
    return a.art<b.art;
}
int main()
{
    Process proc[] = { { 1, 6, 1 }, { 2, 8, 1 },{ 3, 7, 2 }, { 4, 3, 3 } };
	int n = sizeof(proc) / sizeof(proc[0]);
	/*int n;
	cin>>n;
	Process proc[n];
	for(int i=0; i<n; i++){
       proc[i].pid= i+1;
       cin>>proc[i].art;
       cin>>proc[i].bt;
	 }*/
    sort(proc,proc+n,cmp);

    int c[n],wt[n],tat[n];
    c[0]=proc[0].art+proc[0].bt;
    wt[0]=0;
    tat[0]=c[0]-proc[0].art;

    int smWt=wt[0];
    int smTat=tat[0];
    for(int i=1; i<n;i++){

        c[i]=c[i-1]+proc[i].bt;  ///completion time
        wt[i]=c[i-1]-proc[i].art; ///waiting time
         if(wt[i]<0) wt[i]=0;

        tat[i]=c[i]-proc[i].art; ///turn around time
         smWt+=wt[i];
         smTat+=tat[i];
    }
    cout<<"processId  arrival  burst waiting turnAroundTime\n";
    for(int i=0; i<n; i++){
       cout <<"     "<< proc[i].pid<<"        ";
       cout<< proc[i].art<<"        ";
       cout<<proc[i].bt<<"      ";
       cout<<wt[i]<<"          ";
       cout<<tat[i]<<endl;
	}


    cout<<"Average waiting time "<<(float)smWt/(float)n<<endl;
    cout<<"Average turn around time "<<(float)smTat/(float)n<<endl;
    return 0;
}

/*
 4
 arrival burst time
     1      6
     1      8
     2      4
     3      2
    */
