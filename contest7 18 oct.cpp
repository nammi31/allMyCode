#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1005];
    while(cin>>n){
        char found=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]== 1)
                found=1;
        }
    if(found)  printf("-1\n");
    else  printf("1\n");
    }
    return 0;
}
