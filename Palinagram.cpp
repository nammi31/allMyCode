#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
#define pfs(x)      printf("%s\n",x)
using namespace std;
int main()
{
    char s[1005];
    while(sfs(s)==1 && s[0]!='#'){
      int ln=strlen(s);
      sort(s,s+ln);
      char s1[1005];
      int cnt=1,j=0;
      for(int i=0; i<ln; i++){
         if(s[i]==s[i+1]) cnt++;
         else{
           if(cnt%2) s1[j++]=s[i];
           cnt=1;
        }
      }
      for(int i=0;i<j-1;i++) cout<<s1[i];
      cout<<endl;
    }
    return 0;
}
/*
abbcdee
ddc
aaab
#
*/
/*#include<bits/stdc++.h>
#define sfs(x)      scanf("%s",x)
using namespace std;
int main() {
	char s[503], s1[503];
	while(sfs(s)== 1 && s[0] != '#') {
        map<char,int>mp;
		for(int i = 0; s[i]; i++) mp[s[i]]++;
		int j = 0;
		for(int i = 0; i <= 127; i++) {
			if(mp[i]&1)  s1[j++] = i;
        }
		s1[j] = '\0';
		puts(s1);
	}
	return 0;
}*/

