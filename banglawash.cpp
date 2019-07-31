#include<bits/stdc++.h>
#define iff(i,x,y) if(i>=x&&i<=y)
using namespace std;
int sum[100];
int main()
{
    int t,n,run[15],wic[15];
    string str;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            sum[i]=0;
            getchar();
            getline(cin,str);
            scanf("%d %d",&run[i],&wic[i]);

            iff(run[i],1,99) sum[i]+=1;
            iff(run[i],100,199) sum[i]+=2;
            iff(run[i],200,299) sum[i]+=3;
            iff(run[i],300,399) sum[i]+=4;
            if(run[i]>399) sum[i]+=5;
            iff(wic[i],1,3) sum[i]+=1;
            iff(wic[i],4,6) sum[i]+=2;
            iff(wic[i],7,8)  sum[i]+=3;
            iff(wic[i],9,10) sum[i]+=4;
            if(wic[i]>10)  sum[i]+=5;

        }
        sort(sum,sum+n);
        cout<<
    }

    return 0;
}
