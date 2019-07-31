
#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=10){
          a=0;
          b=n;
        }
        else{
            a=n-10;
            b=10;
        }
      cout<<a<<" "<<b<<endl;
    }
    return 0;
}
