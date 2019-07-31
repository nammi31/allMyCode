#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b>a) return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 int len(int nm)
 {
     int digit=0;
     while(nm){
        nm/=10;
        digit++;
     }
     return digit;
 }
int main()
{
    int n,ar[105],i,j=1;
    while(cin>>n && n){
        int sm=0;
        for(i=0;i<n;i++){
           cin>>ar[i];
           sm+=ar[i];
        }
        printf("Case %d:\n",j++);
        int negative=0;
        if(sm<0){
            sm=(-1)*sm;
            negative=1;
        }
        if(sm%n==0){
            if(negative) printf("- ");
               printf("%d\n",sm/n);
        }
        else {
           int p,q,d=gcd(sm,n);
           p=sm/d;
           q=n/d;
           int space=0;
           if(negative)  space+=2;
           if(p>q){
               space += len(p/q);
               for(i=0;i<(space+len(q)-len(p));i++)
                  cout<<" ";
               cout<<p%q<<endl;
               if(negative) cout<<"- ";
               cout<<p/q;
               for(i=0;i<len(q);i++)
                   cout<<"-";
               cout<<endl;
               for(i=0;i<space;i++)
                   cout<<" ";
               cout<<q<<endl;
           }
           else{
                for(i=0;i<space+len(q)-len(p);i++)  cout<<" ";
                cout<<p<<endl;
                if(negative) cout<<"- ";
                for(i=0;i<len(q);i++)  cout<<"-";
                cout<<endl;
                for(i=0;i<space;i++) cout<<" ";
                cout<<q<<endl;
           }
        }
    }
    return 0;
}
