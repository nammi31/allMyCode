#include<bits/stdc++.h>
#define    FOR(i,x)   for(int i=0;i<x;i++)
using namespace std;
int main()
{

   int feb[3]={13,14,21};
    string febs[3]={"Pohela Falgun","Valentine's Day","International Mother Language Day"};
    int march[3]={8,21,26};
    string marchs[3]={"International Women's Day","International Color Day","Bangladesh Independence Day"};
    int april[2]={1,14};
    string aprils[2]={"April Fools Day","Pohela Boishakh"};
    int may[1]={1};
    string mays[1]={"May Day"};
    int june[1]={19};
    string junes[1]={"Father's Day"};
    int july[1]={18};
    string julys[1]={"Mandela Day"};
    int august[1]={20};
    string augusts[1]={"World Mosquito Day"};
    int oct[1]={31};
    string octs[1]={"Halloween"};
    int nob[1]={19};
    string nobs[1]={"World Toilet Day"};
    int decem[3]={10,16,25};
    string decems[3]={"Human Rights Day","Victory Day of Bangladesh","Christmas Day"};
    int t,k=1;
    scanf("%d",&t);
    while(t--){
    string s;
    int nm;
    cin>>s;
    scanf("%d",&nm);
    string ans;
    if(s == "January") ans=febs[0];
    else if(s=="February"){
        FOR(i,3){
             if(nm<feb[i]){ ans=febs[i]; break;}
             else ans=marchs[0];
    }
    }
    else if(s=="March"){
        FOR(i,3){
             if(nm<march[i]){ ans=marchs[i]; break;}
             else ans=april[0];
    }
    }
    else if(s=="April"){
        FOR(i,2){
             if(nm<april[i]){ ans=aprils[i]; break;}
             else ans=mays[0];
    }
    }
    else if(s=="May"){
           if(nm<may[0]){ ans=mays[0];}
             else ans=junes[0];
    }
    else if(s=="June"){
           if(nm<june[0]){ ans=junes[0];}
             else ans=julys[0];
    }
    else if(s=="July"){
             if(nm<july[0]){ ans=julys[0];}
             else ans=augusts[0];
    }
    else if(s=="August"){
        if(nm<august[0]){ ans=augusts[0];}
             else ans=octs[0];
    }
    else if(s=="September") ans=octs[0];
    else if(s=="October"){
           if(nm<oct[0]){ ans=octs[0];}
             else ans=nobs[0];
    }
    else if(s=="November"){
           if(nm<nob[0]){ ans=nobs[0];}
             else ans=decems[0];
    }
    else if(s=="December"){
        FOR(i,3){
             if(nm<decem[i]){ ans=decems[i]; break;}
             else ans=febs[0];
    }
    }
    printf("Case %d: ",k++);
    cout<<ans<<endl;
    }
    return 0;
}
