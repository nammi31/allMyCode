#include<bits/stdc++.h>
#define pf          printf
using namespace std;
int main()
{
    string s1,s2;
    int memory=0;
    char overflow=0;
    while(cin>>s1>>s2){
        if(s1=="call"){
          if(s2=="a()") memory+=1;
          else if(s2=="b()") memory+=2;
          else if(s2=="c()") memory+=3;
          else if(s2=="d()") memory+=4;
          else if(s2=="e()") memory+=5;
          else if(s2=="main()") memory+=3;
        }
        if(memory>100) overflow=1;
        cout<<memory<<endl;
        if(s1=="return"){
            if(s2=="a()") memory-=1;
          else if(s2=="b()") memory-=2;
          else if(s2=="c()") memory-=3;
          else if(s2=="d()") memory-=4;
          else if(s2=="e()") memory-=5;
          else if(s2=="main()") memory-=3;
        }
    }
    if(overflow) pf("stack overflow\n");
    else pf("success\n");
    return 0;
}
