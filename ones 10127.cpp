#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    while(cin>>d){

        int digit=1,n=1;
        while(n%d!=0){
            n=(n*10+1)%d;
            digit++;
        }
        printf("%d\n",digit);
    }
    return 0;
}
