#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m,fd,s[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int t,total;
    cin>>t;
    while(t--){
      cin>>m>>fd;
      if(m=="FEB")  total=28;
      else if(m=="APR"||m=="JUN"||m=="SEP"||m=="NOV") total=30;
      else total=31;
      int i,j;
      for(i=0;i<7;i++)
        if(s[i]==fd) j=i;
      int day=0,weekend=0;
      while(day<total){
        if(s[j]=="FRI"|| s[j]=="SAT") weekend++;
        day++,j++;
        if(j==7) j=0;
      }
      cout<<weekend<<endl;
    }
    return 0;
}
