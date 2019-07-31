#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,days,n,flag[3660],i,hp;
    cin>>t;
    while(t--){
        cin>>days;
        for(i=1; i<=days; i++)
          flag[i]=0;
        cin>>n;
        while(n--){
            cin>>hp;
            for(i=hp;i<=days;i+=hp)
                flag[i]=1;
        }
        int cnt=0;
        for(i=1;i<=days;i++){
            if(i%7!=6 && i%7!=0){
                if(flag[i]) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
