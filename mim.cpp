#include<bits/stdc++.h>
using namespace std;
int i;
pair<long long,long long> p[5007];
int main()
{
    long long n,m;
    while(cin >> n >> m)
    {
        for(i=0; i<m; i++)
        {
            long long prc,a;
            cin >> prc >> a;
            p[i]=make_pair(prc,a);
        }
        sort(p,p+m);
        for(i=0;i<m;i++)
        {
            cout << p[i].first << " " << p[i].second << endl;
        }
        long long rem=n,cost=0,taken=0,curr,prc;
        for(i=0; i<m; i++)  // < m hobe
        {

                if(rem==0) break;
                if(rem>=p[i].second)
                {
                    taken+=p[i].second;
                    cost+=(p[i].first*p[i].second);
                    rem=n-taken;
                    cout << i << " " << p[i].second << " " << taken << " " << cost << " " << rem << endl;
                }
                else
                {
                     cost+=(rem*p[i].first);
                    // curr=rem;
                     rem=0;
                    // prc=p[i].first;

                }


        }
        //cost+=curr*prc;

        cout << cost << endl;
    }

    return 0;
}
