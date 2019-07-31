#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,y1,x2,y2,X1,Y1,X2,Y2;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        cin>>X1>>Y1>>X2>>Y2;
        int a,b,c,d;
        a=max(x1,X1);
        b=max(y1,Y1);
        c=min(x2,X2);
        d=min(y2,Y2);
        if(a>=c || b>=d) printf("No Overlap\n");
        else  printf("%d %d %d %d\n",a,b,c,d);
        if(t) printf("\n");
    }
  return 0;
}
