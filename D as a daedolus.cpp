#include<bits/stdc++.h>
#define  sf1(x)   scanf("%d",&x)
#define  sf2(x,y) scanf("%d %d",&x,&y)
#define FOR(i,x)  for(int i=0;i<x;i++)
#define FOR1(i,x) for(int i=1;i<x;i++)
#define FORr(i,x) for(int i=x;i>=0;i--)
#define pf1(x)    printf("%d\n",x)
using namespace std;

int main() {
	int ply, r;
	int card[5] = {1, 10, 100, 1000, 10000};
	while (sf2(ply,r) == 2) {
		int T, x,d, extra = 0;
		FOR (i,r) {
			sf2(T,d);
			int sm=d;
			FOR1(i,ply){  sf1(x); sm += x;}
			if (sm <= T) {   //success
				FORr (j,4) {
					if (sm-d + card[j] <= T)
						extra += card[j] - d, j=-1;
				}
			} else   //fail
				 {  FORr (j,4) {
					if (sm-d + card[j] <= T)
                    extra += card[j], j=-1;
				}
			}
		}
		pf1(extra);
	}
	return 0;
}
