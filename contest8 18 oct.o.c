#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,long long>M;
	cin>>text;
	FOR(i,0,text.length())
		M[text[i]]++;
			long long sum=0;
	map<char,long long>::iterator it;
	for(it=M.begin() ; it!=M.end() ; it++)
		sum+=it->second*it->second;

	cout<<sum<<endl;
    return 0;
}
