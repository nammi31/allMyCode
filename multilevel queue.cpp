#include<bits/stdc++.h>
using namespace std;
#define N 10

struct Process
{
    int pid, arrival_time, burst_time, priority;
    int q, ready;
} ;

int Queue(int t1)
{
    if (t1 == 0 || t1 == 1 || t1 == 2 || t1 == 3)
        return 1;
    else return 2;

}

int main()
{
    int n, i, temp_process, time, j, y;
    Process temp;
    printf("Enter Total Number of Processes:\t");
    cin>>n;
    Process proc[n];
    for(i = 0; i < n; i++)
    {

        printf("\nproc ID:\t");
        cin>>proc[i].pid;

        printf("Arrival Time:\t");
        cin>>proc[i].arrival_time;

        printf("Burst Time:\t");
        cin>>proc[i].burst_time;

        printf("Process Priority:\t");
        cin>>proc[i].priority;

        temp_process = proc[i].priority;
        proc[i].q = Queue(temp_process);
        proc[i].ready = 0;
    }
    time = proc[0].burst_time;
    for(y = 0; y < n; y++){
        for(i = y; i < n; i++){
            if(proc[i].arrival_time < time){
               proc[i].ready = 1;
            }
        }
        for(i = y; i < n - 1; i++){
            for(j = i + 1; j < n; j++){
                if(proc[i].ready == 1 && proc[j].ready == 1){
                    if(proc[i].q == 2 && proc[j].q == 1){
                        temp = proc[i];
                        proc[i] = proc[j];
                        proc[j] = temp;
                    }
                }
            }
        }

        for(i = y; i < n - 1; i++){
            for(j = i + 1; j < n; j++){
                if(proc[i].ready == 1 && proc[j].ready == 1){
                    if(proc[i].q == 1 && proc[j].q == 1){
                        if(proc[i].burst_time > proc[j].burst_time){
                            temp = proc[i];
                            proc[i] = proc[j];
                            proc[j] = temp;
                        }
                        else break;
                    }
                }
            }
        }
        printf("\nProcess[%d]:\tTime:\t%d To %d\n", proc[y].pid, time, time + proc[y].burst_time);
        time = time + proc[y].burst_time;
        for(i = y; i < n; i++){
            if(proc[i].ready == 1){
                proc[i].ready = 0;
            }
        }
    }
    return 0;

}

