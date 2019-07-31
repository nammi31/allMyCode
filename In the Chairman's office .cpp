/*#include<bits/stdc++.h>
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf          printf
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    int n,m;
    sf2(n,m);
    if(m<n){ pf("NO\n"); return 0;}
    pfs((m%n==0)?"YES":"NO");
    return 0;
}*/
 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    cout << n << endl;
    for(i=0; i<n; i++)
    {
        string s;
        cin >> s;
        int l=0,d=0,sym=0;
        int len=s.size();
        for(j=0; j<len; j++)
        {
            if((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z'))
                l++;
            else if(s[j]>='0' && s[j]<='9')
                d++;
            else if(s[j]=='@' || s[j]=='?' || s[j]=='!')
                sym++;
        }
        if(l<4)
            printf("The last character must be a letter.\n");
        else if(d<4)
            printf("The last character must be a digit.\n");
        else if(sym<2)
            printf("The last character must be a symbol.\n");
        else
            printf("The last character can be any type.\n");


    }
    return 0;
}
