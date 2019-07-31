#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<x;i++)
using namespace std;
int a[103],n;
void insertionsort()
{
    int j;
    FOR1(i,n){
        int key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        FOR(k,n-1) pf1s(a[k]);
        pf1(a[n-1]);
    }
}
int main()
{
    sf1(n);
    FOR(i,n) sf1(a[i]);
    FOR(i,n-1) pf1s(a[i]);
    pf1(a[n-1]);
    insertionsort();
    return 0;
}
/* for i = 1 to A.length-1
    key = A[i]
    /* insert A[i] into the sorted sequence A[0,...,j-1] */
    /*    j = i - 1
    while j >= 0 and A[j] > key
        A[j+1] = A[j]
        j--
    A[j+1] = key*/
