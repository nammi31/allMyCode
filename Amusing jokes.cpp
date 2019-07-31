#include<bits/stdc++.h>
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    string s1,s2,s3,sm;
    cin>>s1>>s2;
    sm=s1+s2;
    sort(sm.begin(),sm.end());
    cin>>s3;
    sort(s3.begin(),s3.end());
    pfs((s3==sm)? "YES":"NO");
    return 0;
}
