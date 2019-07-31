#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j=1;
    cin>>t;
    while(t--){
        cin>>n;
        printf("Case %d: ",j++);
        if(n>=80) printf("A+\n");
        else if(n>=75  && n<=79)
            printf("A\n");
        else if(n>=70 && n<=74 )
            printf("A-\n");
        else if(n>=65  && n<=69 )
            printf("B+\n");
        else if(n>=60  && n<=64)
            printf("B\n");
        else if(n>=55 && n<=59 )
            printf("B-\n");
        else if(n>=50 && n<=54 )
            printf("C\n");
        else if(n>=45  && n<=49)
            printf("D\n");
        else if(n<=44)
            printf("F\n");
    }
    return 0;
}
