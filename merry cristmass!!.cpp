#include<bits/stdc++.h>
using namespace std;
int a[200003];
int main()
{
    int t,i,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
           int ans = a[k- 1] - a[0];

        for(int i = 1;i + k - 1 < n;++i)
            ans = min(ans,a[i + k - 1] - a[i]);

        printf("%d\n",ans);
    }

    return 0;
    }

