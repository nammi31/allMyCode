#include<bits/stdc++.h>
#define  mem(a)          memset(a,-1,sizeof(a))
#define  all(a)          (a.begin(),a.end())
#define  clr(a)          memset(a,0,sizeof(a))
#define   pb             push_back
#define   PI             acos(-1.0)
#define   max3(a,b,c)    max(a,max(b,c))
#define   min3(a,b,c)    min(a,min(b,c))
#define   read           freopen("input.txt", "r", stdin)
#define   write          freopen("output.txt", "w", stdout)
#define   ll             long long
#define    s1(a)         scanf("%d",&a)
#define   s2(a,b)        scanf("%d %d",&a,&b)
#define   cp             printf("Case %d: ",kk++)
#define   mod            1000000007
#define   mx             100010
#define   pf1(a)         printf("%d",a)
#define   pf2(a,b)       printf("%d %d",a,b)
#define For(i,a,b)       for(i=a;i<b;i++)
#define gofast           ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
double func(double x)
{
    if(x<51) return 5.0;
    if(x<61 && x>=51) return 4.0;
    if(x<71 && x>=61) return 3.0;
    if(x<81 && x>=71) return 2.0;
    if(x<91) return 1.0;
    else return 0.0;
}
double get_point(double x)
{
    if(x>=91) return 10.0;
    if(x>=81) return 9.0;
    if(x>=71)   return 8.0;
    if(x>=61) return 7.0;
    if(x>50) return 6.0;
    if(x==50) return 5.0;
    else return 0.0;
}
int main()
{
       int n;
       cin>>n;
       while(n--){
              double credit[8],C=0.0;
              for(int i=0; i<6; i++) { cin>>credit[i]; C+=credit[i];}
              double ans=0.0;
              char fail=0;
              for(int i=0; i<6; i++){
                double val,sm=0.0,mn=999.0,fnal,atten;
                char tt[3];
                for(int j=0;j<3;j++){
                    cin>>tt;
                    if(tt=="ab") val=0;
                    else val=atof(tt);
                    sm+=val;
                    mn=min(val,mn);
                }
                double ttmark=((sm-mn)*9.0)/8.0;
                cin>>fnal>>atten;
                fnal/=2.0;
                double Matt=func(atten);
                double total=ttmark+fnal+Matt;
                double point= get_point(total);
                if(point==0) fail=1;
                ans+=(point*credit[i]);
              }
              ans/=C;
              if(fail) printf("FAILED, ");
              else printf("PASSED, ");
              printf("%.2f\n",ans);
       }

return 0;
}
