#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sc[22];
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int mile=0,juice=0;
        for(int j=0;j<n;j++){
            cin>>sc[j];
            mile+=(sc[j]/30+1)*10;
            juice+=(sc[j]/60+1)*15;
        }
        printf("Case %d: ",i);
        if(mile==juice)
            printf("Mile Juice %d\n",mile);
        else if(mile<juice)
            printf("Mile %d\n",mile);
        else printf("Juice %d\n",juice);

    }
    return 0;
}
