
/*#include<bits/stdc++.h>
#define   sf1(x)      scanf("%d",&x)
#define   pf          printf
#define   FOR(i,x)    for(int i=0;i<x;i++)
#define   sf2(x,y)  scanf("%d %d",&x,&y)
using namespace std;

int main()
{
   int n,q,x;
   sf2(n,q);
   int a[n];
   FOR(i,n)  sf1(a[i]);
   sort(a,a+n);
   while(q--)
   {
       sf1(x);
       if((binary_search(a,a+n,x))==1) pf("YES\n");
       else    pf("NO\n");

   }
    return 0;
}*/
/*#include<bits/stdc++.h>
#define   sf1(x)      scanf("%d",&x)
#define   pf          printf
#define   FOR(i,x)    for(int i=0;i<x;i++)
#define   sf2(x,y)  scanf("%d %d",&x,&y)
using namespace std;
int n,a[100005];
int bin_search(int x){
    int lw=0, hi=n-1;
    while(lw<=hi){
       int mid = (lw+hi)/2;
       if(a[mid]==x)
            return 1;
        else if(a[mid]>x)
            hi=mid-1;
        else if(a[mid]<x)
            lw=mid+1;
    }
    return 0;
}

int main()
{
    int  q,x;
    sf2(n,q);
    FOR(i,n) sf1(a[i]);
    sort(a,a+n);
    while(q--){
        sf1(x);
        if(bin_search(x))  pf("YES\n");
        else    pf("NO\n");
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
#define   sf1(x)      scanf("%d",&x)
#define   pf          printf
#define   FOR(i,x)    for(int i=0;i<x;i++)
#define   sf2(x,y)  scanf("%d %d",&x,&y)
using namespace std;
int n,a[100005];
void bin_search(int x)
{
    int lw=0,hi=n-1;
    while(lw<=hi){
        int m=(hi+lw)/2;
        if(a[m]==x)  { pf("YES\n"); return;}
        else if(x<a[m])  hi=m-1;
        else    lw=m+1;
    }
    pf("NO\n");
}
int main()
{
    int q,x;
    sf2(n,q);
    FOR(i,n) sf1(a[i]);
    sort(a,a+n);
    while(q--)
    {
       sf1(x);
       bin_search(x);
    }
    return 0;
}*/
#include <iostream>
using namespace std;

void search(int *A,int start,int end,int key);
int quick_sort(int *,int ,int );
void sort(int * ,int, int );
int main()
{
    int n,q,A[100001],Q[100001];
    cin>>n>>q;

    for(int i = 0;i < n; i++){
        cin>>A[i];
    }
    sort(A, 0,n-1);
    for(int i = 0;i < q; i++){
        cin>>Q[i];
    }
    for(int i = 0;i < q; i++){
        int m = Q[i];
        search(A,0,n-1,m);
    }
    return 0;
}

void search(int *A,int start,int end,int key){
    int mid;

    while(start <= end){
        mid = (start+end)/2;
        if(A[mid] == key){
            cout<<"YES"<<endl;
            return;
        }

        else if(key < A[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        }
        cout<<"NO"<<endl;
}
int  quick_sort(int *A,int start,int end){
    int pivot = A[end];
    int i = start-1;
    for(int j = start;j < end;j++){
        if(A[j] < pivot){
            i++;
            int swap = A[j];
            A[j] = A[i];
            A[i] = swap;
        }
    }
    i++;
    int swap = A[end];
    A[end] = A[i];
    A[i] = swap;

    return (i) ;
 }
void sort(int *A,int start,int end){
    int q;
    if(start < end){
        q = quick_sort(A,start,end);
       // cout<<q<<endl;
        sort(A,start,q-1);
        sort(A,q+1,end);
    }
}
