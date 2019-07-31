#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx=-1;
    string words;
    vector<string>vs;
    while(cin>>words) vs.push_back(words);
    sort(vs.begin(),vs.end());
    int wordcnt=1;
    words=vs[0];
    string ans;
    for(int i=1;i<vs.size();i++){
        if(words!=vs[i]){
           wordcnt=0;
           words=vs[i];
        }
        wordcnt++;
       if(wordcnt>mx){ mx=wordcnt; ans=words;}
    }
    cout<<ans<<endl;
    return 0;
}
