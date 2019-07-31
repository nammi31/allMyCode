#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
bool choosed[15];
int ar[15],k;
using namespace std;

void backtrack(int index)
{
    int i;
    if(ans.size()==6)
    {
       for(i=0; i<5; i++)
          cout<<ans[i]<<" ";
       cout<<ans[5]<<endl;       
       return;
    }
    for(i=index; i<k; i++)
    {
       if(choosed[i]==0)
        {
            ans.push_back(ar[i]);
            choosed[i]=1;
            backtrack(i+1);
            choosed[i]=0;
            ans.pop_back();
        }
    }
}
int main()
{
    int i,j=1;

    while(scanf("%d",&k) && k)
    {
        if(j>1)printf("\n");
        for(i=0; i<k; i++)
            scanf("%d",&ar[i]);
        backtrack(0);
        j++;

    }
    return 0;
}
