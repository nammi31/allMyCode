#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define sf2(x,y)    scanf("%d %d",&x,&y)
#define pf1(x)      printf("%d\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
#define FORr(i,x)   for(int i=x-1; i>=0;i--)
using namespace std;
int main(){
	int n,q,pos;
	while (sf2(n,q)==2){
		int a[n];
		int cnt[100005] = {0},found[100005] = {0};
		FOR(i,n)  sf1(a[i]);
		FORr(i,n){
			if (!found[a[i]]){
				cnt[i] = cnt[i+1] + 1;
				found[a[i]]=1;
			}
			else cnt[i] = cnt[i+1];
		}
		while(q--){
            sf1(pos);
            pf1(cnt[pos-1]);
		}
	}
	return 0;
}
/*
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10
*/
