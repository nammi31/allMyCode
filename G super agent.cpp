#include<bits/stdc++.h>
using namespace std;
int x,y,z;
string s;
#define sf scanf
#define pf printf
#define in1(x) cin>>x
#define in2(x,y) cin>>x>>y
#define in3(x,y,z) cin>>x>>y>>z
#define exit return 0
#define out1(x) cout<<x
#define out2(x,y) cout<<X<<" "<<y
#define out3(x,y,z) cout<<X<<" "<<y<<" "<<z
#define nl cout<<endl
#define outcs(x) cout<<"Case "<<x<<": "
#define out(x) cout<<x<<" "
#define pb push_back
#define ppb pop_back
#define ll long long int
#define pi acos(-1.00)
#define mod 1000000007
#define mx INT_MAX
#define mn INT_MIN
#define mem(x,y) memset((x),y,sizeof(x))
#define mx2(x,y) max(x,y)
#define mx3(x,y,z) max(x,max(y,z))
#define mn2(x,y) min(x,y)
#define mn3(x,y,z) min(x,min(y,z))
#define fs first
#define sc second
#define fr0(i,x) for(ll i=0;i<x;i++)
#define fr1(i,x) for(ll i=1;i<=x;i++)
#define sln(s)  s.lenght()
#define ch(s) strlen(s)
#define infile freopen("lubu.txt" , "r", stdin)
int main()
{
    char ch[5][5];
    fr1(i,3)
    {
        fr1(j,3)
        {
            cin>>ch[i][j];
        }
    }
    if((ch[1][3]==ch[3][1])&&(ch[1][1]==ch[3][3])&&(ch[1][2]==ch[3][2])&&(ch[2][1]==ch[2][3]))
            cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    exit;
}


