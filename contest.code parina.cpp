#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch)
{
    ch=tolower(ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'|| ch=='y')
        return true;
    return false;

}
int main()
{
    string s;
    while(getline(cin,s)){
        int i;
        for( i=s.length()-1; ;i--){
            if(isalpha(s[i])){
                if(isvowel(s[i]))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
              break;
            }
        }
    }
    return 0;
}
