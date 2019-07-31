#include<bits/stdc++.h>
using namespace std;
#define mx 1700
//int nm[mx];
int main()
{
    int i,j,nm[mx];
    for(i=0;i<mx;i++)
       nm[i]=i+2;

    for(i=0;i<mx;i++){
        if(nm[i]){
            for(j=2*nm[i]-2;j<mx;j+=nm[i])
                nm[j]=0;}
    }
    int a,b,n;
    while(cin>>a>>b)
    {
       int prime=0;
       for(i=a;i<=b;i++){
          n =((i*i)+i+41);
          if(nm[n]) prime++;
        }
        int ncnt=i-1-a;
       cout<<prime<<" "<<ncnt<<endl;

       double r = (prime*100.0)/ncnt;
       printf("%.2lf\n",r);
       }
    return 0;
}

