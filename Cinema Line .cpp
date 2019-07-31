#include<bits/stdc++.h>
#define sf1(x)   scanf("%d",&x)
#define  pf  printf
using namespace std;
int main()
{
    int n,a[100007];
    sf1(n);
    int found25=0,found50=0,found100=0,fail=0;
    for(int i=0;i<n;i++)
    {
        sf1(a[i]);
        if(a[i]==25) found25++;

        else if(a[i]==50){
            if(!found25){ fail=1; break;}
            else { found25--;  found50++; }
        }

        else if(a[i]==100){
            if(found50){
                found50--;
                if(!found25){ fail=1; break;}
                else found25--;
            }
            else{
                if(found25>=3) found25-=3;
                else { fail=1; break;};
            }
        }
    }
    if(!fail)   pf("YES\n");
    else       pf("NO\n");
    return 0;
}
