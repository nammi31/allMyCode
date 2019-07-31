/*#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main() {
	string line;
	int t;
	sf1(t);
	getchar();
	while(t--) {
		getline(cin,line);
		istringstream ss(line);
		int a[30], i = 0, sm = 0;
		while(ss>>a[i]){ sm += a[i];  i++; }
        int n=i;
        int posi[201] = {};
		posi[0] = 1;
		if(sm%2==0) {
            sm/=2;
              FOR(i,n){
				for(int j = sm; j >= a[i]; j--){
					if(posi[j-a[i]]) {
						posi[j] = 1;
					}
                }
			}
		}
		pfs((posi[sm])?"YES":"NO");
	}
    return 0;
}
/*
3
2 3 4 5 6
*/
#include<bits/stdc++.h>
#define sf1(x)      scanf("%d",&x)
#define pfs(x)      printf("%s\n",x)
#define FOR(i,x)    for(int i=0;i<x;i++)
using namespace std;
int main() {
	string line;
	int t,n;
	sf1(t);
	getchar();
	while(t--) {
        sf1(n);
		FOR(i,n) { sf1(a[i); sm+=a[i];}
        int posi[201] = {},cnt=0;
		posi[0] = 1;
		if(sm%4==0){
            sm/=4;
              FOR(i,n){
				for(int j = sm; j >= a[i]; j--){
					if(posi[j-a[i]]) {
						posi[j] = 1;
                        if(j==sm) cnt++;
					}
                }
			}
		}
		pfs((cnt==4)?"YES":"NO");
	}
    return 0;
}
/*
3
4 1 1 1 1
5 10 20 30 40 50
8 1 7 2 6 4 4 3 5*/
