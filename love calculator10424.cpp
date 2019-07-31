#include<bits/stdc++.h>
using namespace std;
int str_add(string s)
{
    int i,sm=0;
    for(i=0; s[i];i++){
        if(isupper(s[i]))  sm+=(s[i]-64);
        else if(islower(s[i])) sm+=(s[i]-96);
    }
    if(sm%9==0) sm=9;
    else sm=sm%9;
    return sm;
}
int main()
{
    string s1,s2;
    while( getline(cin,s1)){
          getline(cin,s2);
        int sm1=str_add(s1),sm2=str_add(s2);
        float love;
        if(sm1>=sm2) love=(sm2*100.0)/sm1;
        else  love=(sm1*100.0)/sm2;
        printf("%.2f %%\n",love);
    }
    return 0;
}
