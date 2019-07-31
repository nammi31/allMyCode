/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pcase(x)    printf("Case %d: ",x)
#define pf          printf
#define pf1(x)      printf("%d\n",x)
#define pf1s(x)     printf("%d ",x)
#define pf2(x,y)    printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FOR1(i,x)   for(int i=1;i<=x;i++)
#define FORL(i,lw,x)  for(int i=lw;i<x;i++)
#define FORr(i,x)   for(int i=n; i>=1;i--)
#define pb          push_back
#define ppb         pop_back
#define mem(a,x)    memset(a,x,sizeof(a))
using namespace std;
int main()
{
    string s,s2,temp;
    vector<string>vs;
    int n;
    sf1(n);
    while(n--)
    {
        cin>>s;
        temp="";
        if(s=="cmd"){
            cin>>s2;
            s2+='/';
            for(int i=0; i<s2.size(); i++){
                temp+=s2[i];
                cout<<temp;
                if(s2[i]=='/'){
                  if(temp=="/"){
                    vs.pb("/");
                  }
                  else if(temp=="../"){
                     vs.ppb();
                  }
                  else {
                     vs.pb(temp);
                     temp="";
                  }
                }
            }
        }
        else if(s=="pwd"){
            for(int i=0; i<vs.size(); i++){
                cout<<vs[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
using namespace std;
int main()
{
	string temp,ans,s,s2;
	int i,j,n,len;
	sf1(n);
    ans="/";
	temp="";
	while(n--)
	{
		cin>>s;
		if (s=="cd")
		{
			cin>>s2;
			s2+='/';
			for (i=0; s2[i] ;i++)
			{
				temp+=s2[i];
				if (s2[i]=='/')
				{
					if (temp=="/") ans=temp;
					else if (temp=="../")
					{
						for (j=ans.length()-1;ans[j-1]!='/';j--);
						ans.resize(j);
					}
					else
						ans+=temp;
					temp="";
				}
			}
		}
		else
			cout<<ans<<endl;
	}

	return 0;
}
