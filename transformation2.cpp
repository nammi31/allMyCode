/*
ID: sustnam1
PROG: transform
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
const int mx=15;

int num,ans;
char start[mx][mx],end[mx][mx],start1[mx][mx];

bool ratate(char start[mx][mx],char end[mx][mx])
{
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++)
            if(end[j][num-1-i]!=start[i][j]) return false;
    return true;
}

bool ratate2(char start[mx][mx],char end[mx][mx])
{
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++)
            if(end[num-1-i][num-1-j]!=start[i][j]) return false;
    return true;
}

bool ratate3(char start[mx][mx],char end[mx][mx])
{
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++)
            if(end[num-1-i][i]!=start[i][j]) return false;
    return true;
}

bool reflex(char start[mx][mx],char end[mx][mx])
{
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++)
            if(end[i][num-1-j]!=start[i][j]) return false;
    return true;
}

bool combination(char start[mx][mx],char end[mx][mx])
{
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++) start1[i][j]=start[i][num-1-j];
    if(ratate(start1,end) || ratate2(start1,end) || ratate3(start1,end)) return true;
    return false;
}

bool original(char start[mx][mx],char end[mx][mx])
{
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++)
            if(start[i][j]!=end[i][j]) return false;
    return true;
}

int main()
{
    freopen("transform.in","r",stdin);
    freopen("transform.out","w",stdout);
    scanf("%d",&num);
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++) cin>>start[i][j];
    for(int i=0; i<num; i++)
        for(int j=0; j<num; j++) cin>>end[i][j];
    if(ratate(start,end)) ans=1;
    else if(ratate2(start,end)) ans=2;
    else if(ratate3(start,end)) ans=3;
    else if(reflex(start,end)) ans=4;
    else if(combination(start,end)) ans=5;
    else if(original(start,end)) ans=6;
    else ans=7;
    printf("%d\n",ans);
    return 0;
}
