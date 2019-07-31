/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="this .is ,a simple task-";
    char *p;
    p=strtok(s,".,-");  ///Split string into tokens
    while(p!=NULL){
        printf("%s\n",p);
        p=strtok(NULL,".,-");
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="Rudolph is 12 b=1997 when a=98";
    char str[20];
    int i,n,m;
    sscanf(s,"%s %*s %d",str,&n); printf("%s %d\n",str,n);
    for(i=0; i<strlen(s); i++){
        if(s[i]=='='){
        sscanf(s+i+1,"%d",&m); printf("%d\n",m);
        }
    }

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[205];
    int t,j=1;
    cin>>t;
    getchar();
    while(t--){
        gets(s);
        int ln=strlen(s),i;
        double val;
        bool foundP=false,foundU=false,foundI=false;
        double p,v,I;
        for(i=0; i<ln;i++){
            if(s[i]=='='){
               char ch=s[i-1];
               i++;
               sscanf(s+i,"%lf",&val);
               while(isdigit(s[i]))  i++;
               if(s[i]=='.') i++;
               while(isdigit(s[i]))i++;
               if(s[i]=='m')  val/=1000.0;
               else if(s[i]=='k')  val*=1000.0;
               else if(s[i]=='M') val*=1000000.0;
               switch(ch){
                  case 'P': foundP=true; p=val; break;
                  case 'U': foundU=true; v=val; break;
                  case 'I': foundI=true; I=val; break;
               }
            }
         }
         printf("Problem #%d\n",j++);
         if(!foundP)  printf("P=%.2lfW",v*I);
         else if(!foundU) printf("U=%.2lfV",p/I);
         else if(!foundI)  printf("I=%.2lfA",p/v);
         printf("\n\n");
    }
    return 0;
}



