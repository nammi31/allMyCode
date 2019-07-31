#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005][12],str[12];
    int t,n,i,j,k=1;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>s[i];
        cin>>str;
        printf("Case %d:\n",k++);
        for(i=0;i<n;i++){
            int error=0;
            for(j=0; str[j]; j++){
                error+= s[i][j]!=str[j];
            }
            if(error<=1) cout<<s[i]<<endl;
        }
    }
    return 0;
}
