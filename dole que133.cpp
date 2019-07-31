#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,m;
   while(cin>>n>>k>>m && (n | m | k))
   {
        char flag[22],comma=0;
        memset(flag,1,sizeof(flag));
        int a=1,b=n,retrin=0;
        while(retrin!=n)
        {
            int anticl=0;
            while(1){
                if(flag[a]) anticl++;
                if(anticl==k) break;
                a++;
                if(a==n+1) a=1;
            }
            int cl=0;
            while(1){
                if(flag[b])  cl++;
                if(cl==m) break;
                b--;
                if(b==0) b=n;
            }
            flag[a]=flag[b]=0;
            if(comma) cout<<",";
              comma=1;
            if(a!=b){
                printf("%3d%3d",a,b);
                retrin+=2;
            }
            else{
                printf("%3d",a);
                retrin++;
            }
       }
    cout<<endl;
   }
   return 0;
}
