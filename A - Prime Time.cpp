  #include<bits/stdc++.h>
#define mx 10001
using namespace std;
int a[1300],i,j,c;
void seive()
{
  int p[mx];
  for(i=2;i<mx; i++) p[i]=1;
  for(i=2;i*i<mx;i++){
    if(p[i]){
        for(j=2; i*j<mx; j++)
            p[i*j]=0;
    }
  }

  a[0]=2,c=1;
  for(i=3;i<mx;i+=2)
     if(p[i])  a[c++]=i;

}
int main()
{
    seive();
    int nm,n;
    while(cin>>nm){
        int cnt[mx]={0};
        for(i=nm ;i>=2;i--){
            n=i;
            for(j=0; ; j++){
                if(n%a[j]==0){
                    while(n%a[j]==0){
                        n/=a[j];
                        cnt[a[j]]++;
                    }
                }
                if(n==1) break;
            }
        }
        int star=0;
        for(j=0; j<c;j++){
            if(cnt[a[j]]>=1){
                if(star) printf(" * ");
                star=1;
                cout<<a[j]<<"^"<<cnt[a[j]];
            }
        }
        cout<<endl;
    }
    return 0;
}
