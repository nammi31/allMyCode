    ///1,2 note thakle t tk bananor total ways(nPr)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   //int coins={1,2} set
    int tk=5,ways[100];
    ways[0]=ways[1]=1;   ///just like a fibonacci as coins r 1 2
    for(int i=2;i<=tk; i++)    /// 5=1+(4)
    ways[i]=ways[i-1]+ways[i-2];///5=2+(3)
    cout<<ways[tk]<<endl;
    return 0;
}*/

   ///  same thing using recursive function
/*#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==1 || n==0) return 1;
    return rec(n-1)+rec(n-2);
}
int main()
{
    cout<<rec(5);
}*/
/// same thing just calculate kora value gulu store kore rakhchi(DP)
        /// barbar ber korchi na
/*#include<bits/stdc++.h>
using namespace std;
int a[100];
int rec(int n)
{
  if(n==1 || n==0) return 1;
  if(a[n]) return a[n];
  return a[n]=rec(n-1)+rec(n-2);
}
int main()
{
    memset(a,0,sizeof(a));
    cout<<rec(4);
    return 0;
}*/
  /// visited flag niye DP
/*#include<bits/stdc++.h>
using namespace std;
int a[100],visited[100];
int rec(int n)
{
    if(n==0 || n==1)  return 1;
    if(visited[n])  return a[n];
    else{
        visited[n]=1;
        return a[n]=rec(n-1)+rec(n-2);
    }
}
int main ()
{
    int n;
    cin>>n;
    cout<<rec(n);
    return 0;
}*/
   ///1,2 note thakle t tk bananor total ways(nCr)
/*#include<bits/stdc++.h>
using namespace std;
int ways[100],coins[2]={1,2},i,j,tk;
int main()
{
    cin>>tk;
    ways[0]=1;
    for(i=0;i<2;i++){
        for(j=1;j<=tk;j++)
            if(j>=coins[i]) ways[j]+=ways[j-coins[i]];
    }
    for(i=1;i<=tk;i++)  printf("%d ",ways[i]);
    return 0;
}*/
   ///given coin ekadikber use kore t tk banano possible kina
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int coins[3]={7,4,6};
   int n,possible[100];
   cin>>tk;
   memset(possible,0,sizeof(possible));
   possible[0]=1;
   for(int i=1;i<=tk;i++){
      for(int j=0;j<3;j++)
        if(i>=coins[j] && !possible[i]){
            possible[i]=possible[i-coins[j]];
          }
   }
    for(int i=1;i<=n;i++) printf("possible[%d]=%d\n",i,possible[i]);
   return 0;
}*/
     /// possibility check dp(wrong)
/*#include<bits/stdc++.h>
using namespace std;
int dp[100],coins[2]={2,7};
int rec(int n)
{
    if(n==0) return 1;
    if(dp[n]) return dp[n];
    else{
        for(int i=0;i<3;i++){
            if(n>=coins[i]){
                    printf("rec(%d)\n",dp[n],n-coins[i]);
                return dp[n]=rec(n-coins[i]);}
        }
    }
}
int main()
{
    memset(dp,0,sizeof(dp));
    rec(15);
    cout<<dp[15];
    return 0;
}*/
    ///given coin ekadikber use kore t tk bananor total ways
/*#include<bits/stdc++.h>
using namespace std;
int coins[2]={2,3},ways[100];
int main()
{
    int i,j,tk;
    cin>>tk;
    ways[0]=1;
    for(i=1;i<=tk;i++){ /// (1-tk) protekkheter khetre dore 6
        for(j=0;j<2 ; j++) ///  2 use 6=2+(4)==1 //4=2+(2)==1
            if(i>=coins[j])///  3 use 6=3+(3)==1 total 2 vabe
                ways[i]=ways[i]+ways[i-coins[j]];
    }
    cout<<ways[tk];
    return 0;
}*/
    ///given coin kebol ekber use kore t tk banano possible kina
/*#include<bits/stdc++.h>
using namespace std;
int p[100],i,j,coins[3]={2,3,7},tk;
int main()
{
    memset(p,0,sizeof(p));
    p[0]=1;
    cin>>tk;              /// 2 use kore (10->1) 2=2+(0)
        for(j=0;j<3;j++){ /// 2,3 use (10->1) 5=3+(2),3=3+(0)
          for(i=tk;i>=1;i--)/// 2,3,7 use (10->1) 10=7+(3),9=7+(2),7=7+(0)
            if(i>=coins[j]){
                if(p[i-coins[j]]) p[i]=1;
             }

    }
    for(i=1;i<=tk;i++) cout<<p[i]<<" ";
    return 0;
}*/
   ///given coin kebol ekber use kore t tk banano total ways
/*#include<bits/stdc++.h>
using namespace std;
int ways[100],i,j,coins[3]={2,3,5},tk;
int main()
{
    cin>>tk;
    ways[0]=1;
    for(i=0;i<3;i++){
        for(j=tk;j>=1;j--)
            if(j>=coins[i]) ways[j]+=ways[j-coins[i]];
    }
    for(i=1;i<=tk;i++) printf("%d ",ways[i]);
    return 0;
}*/
