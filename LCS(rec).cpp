#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int lcs(int i,int j){
   if(i==0||j==0) return 0;
   if (s1[i-1] == s2[j-1])
       return 1 + lcs(i-1, j-1);
   return max(lcs(i, j-1), lcs(i-1, j));

}
int main()
{
       cin>>s1>>s2;
       int l1=s1.size();
       int l2=s2.size();
       cout<<lcs(l1,l2);


return 0;
}
