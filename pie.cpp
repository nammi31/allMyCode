/*#include<stdio.h>
#include<vector>
#include<math.h>
#include<iostream>

#define pi acos(-1)

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        double Max=0;
        int pie,friends;
        cin>>pie>>friends;
        vector<double>area;
        for(int i=0;i<pie;i++)
        {
            int r;
            cin>>r;
            double A=pi*r*r;
            area.push_back(A);
            Max=max(Max,A);
        }
        double low=0,high=Max,mid;//ans=0;
        while(high-low>.00001)
        {
           // double
             mid=(low+high)/2;
            int x=0;
            for(int j=0;j<area.size();j++)
            {
                x+=area[j]/mid;
            }
            if(x>=friends+1)
            {
                low=mid;
                //ans=mid;
            }
            else
            {
                high=mid;
            }
        }
        printf("%.4lf\n",mid);
    }
    return 0;
}*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf4(x)      printf("%.4lf\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define PI          acos(-1.0)
using namespace std;
int main()
{
    int t,n,f,r;
    sf1(t);
    while(t--)
    {
        sf2(n,f);
        double vol[n],mx=0.0;
        FOR(i,n){
            sf1(r);
            vol[i]=PI*r*r;
            mx=max(vol[i],mx);
        }
        double lw=0.0,hi=mx,md;
        while(hi-lw>.00001){
            md=(hi+lw)/2;
            int allow=0;
            FOR(i,n) allow+=(int)(vol[i]/md);
            if(allow>=(f+1)) lw=md;
            else hi=md;
        }
        pf4(md);
    }
    return 0;
}
