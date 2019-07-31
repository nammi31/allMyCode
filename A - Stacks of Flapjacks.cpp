#include<iostream>   //input-output
#include<string>
#include<sstream>  //string stream
using namespace std;
int main()
{
    string s;
    int a[30];
    while(getline(cin,s)){    ///5 1 2 3 4
        int b=0,n;
        istringstream ss(s);
        while(ss>>n) a[b++]=n; //collect number from string
        int i,j,mx,p;                                                                                       ;
        for(i=b-1;i>=0;i--){
            int mx=-999;
            for(j=0;j<=i;j++)/// i=4 j=0 1 2 3 4  mx=5 p=0
            if(a[j]>=mx){    // i=3 j=0 1 2 3  mx=5 p=0
                mx=a[j];     // i=2 j=0 1 2   mx=5 p=0
                p=j;         // i=1 j=0 1  mx=5 p=0
            }                // i=0 j=0   mx=5 p=0
            if(p!=i){   /// 0!=4/3/2/1(i)
                 if(p!=0){
                   cout<<b-p<<" ";
                   for(j=0; j<=p/2; j++)
                      swap(a[j],a[p-j]);
                  }
               cout<<b-i<<" "; /// 1 2 3
               for(j=0;j<=i/2; j++) ///(0,4)(1,3)(0,4)(1,3)(0,4)(1,3)(0,4)
                  swap(a[j],a[i-j]);
            }
        }
        cout<<"0\n";
    }
    return 0;
}

