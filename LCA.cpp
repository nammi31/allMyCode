/*
AUTHOR: Akhilesh Anandh
Solution for Lowest Common Ancestor (www.spoj.com/problems/LCA)
Algorithm: Brute force
*/

#include<stdio.h>

int parent[1001],visited[1001];

int lca(int x, int y, int n){

	int i;
	for(i=1;i<=n;i++) visited[i] = 0;

	visited[x] = 1;

	while(parent[x]!=x){
		visited[x] = 1;
		x = parent[x];
	}

	visited[x] = 1;

	while(visited[y]!=1) y = parent[y];

	return y;
}

int main(void){
	unsigned t,case_no;
	int n,m,q,x,y,i,j,k;
	scanf("%u",&t);1
7
3 2 3 4
0
3 5 6 7
0
0
0
0
2
5 7
2 7
	for(case_no=1;case_no<=t;case_no++){
		printf("Case %u:\n",case_no);
		scanf("%d",&n);
		for(k=1;k<=n;k++) parent[k] = k;
		for(i=1;i<=n;i++){
			scanf("%d",&m);
			while(m--){
				scanf("%d",&k);
				parent[k] = i;
			}
		}
		scanf("%d",&q);
		while(q--){
			scanf("%d %d",&x,&y);
			printf("%d\n",lca(x,y,n));
		}
	}
	return 0;
}
