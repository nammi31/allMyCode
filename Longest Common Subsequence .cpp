#include<bits/stdc++.h>
using namespace std;
int LCS(string s1,string s2)
{
     if (s1.length() > s2.length()) swap(s1,s2);
     int ln1 = s1.length(),ln2=s2.length();
     vector< vector<int> > c(2, vector<int>(ln1+1,0));
     for (int i=1;i<=ln1;i++)
     {
         for (int j=1;j<=ln2;j++)
         {
             if (s1[i-1]==s2[j-1])
                c[1][j]=c[0][j-1]+1;
             else
                 c[1][j]=max(c[1][j-1],c[0][j]);
         }
    	 for (int j=1;j<=ln1;j++)
    		 c[0][j]=c[1][j];
     }
     return (c[1][ln1]);
}


int main(){
   string s1,s2;
   cin>>s1;
   cin>>s2;
   cout<<LCS(s1,s2);
}
