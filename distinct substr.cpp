#include <bits/stdc++.h>
using namespace std;
#define MAX 50009
#define PB push_back
#define MP make_pair
int rank[20][MAX];
struct tuple
{
    int pos;
    int firstHalf,secondHalf;
};
bool compare(const tuple &a , const tuple &b)
{
    return a.firstHalf == b.firstHalf ?a.secondHalf < b.secondHalf :a.firstHalf < b.firstHalf;
}
int * suffix_array(tuple t[] , char s[], int length )
{
    int pos = 0;
    int *arr = (int*)calloc(length+9,sizeof(int));
    for(int i=0;i<length;i++)
        rank[0][i] = s[i] - 'A';
    for(int cnt = 1,stp = 1;(cnt>>1) < length ; cnt<<=1,stp++)
    {
        for(int i = 0;i<length ; i++)
        {
            t[i].firstHalf = rank[stp-1][i];
            t[i].secondHalf = i+cnt < length ? rank[stp-1][i+cnt] : -1;
            t[i].pos = i;
        }
        sort(t,t+length,compare);
        int rnk = 0;
        for(int i = 0 ; i<length ; i++)
        {
            if((i > 0) && (t[i-1].firstHalf == t[i].firstHalf && t[i].secondHalf == t[i-1].secondHalf))
                rnk = rank[stp][t[i-1].pos];
            else
                rnk = i;
            rank[stp][t[i].pos] = rnk;
        }
    }
    pos = ceil(log(length)/log(2));
    for(int i=0;i<length;i++)
        arr[rank[pos][i]] = i;
    return arr;
}
int LCP(int i,int j,int n)
{
    int res = 0;
    if(i==j)
        return n - i;
    for(int stp = ceil(log(n)/log(2)) ; stp>=0 && i < n && j < n ; stp--)
        if(rank[stp][i] == rank[stp][j])
        {
            res += 1<<stp;
            i += 1<<stp;
            j += 1<<stp;
        }
    return res;
}
int LCParray(char s[],int p[],int n)
{
    int sum = 0;
    for(int i = 1 ; i < n ; i++)
        sum += (LCP(p[i-1],p[i],n));
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[50009];
        scanf("%s",s);
        int n = strlen(s);
        tuple t[n + 9];
        int *p;
        p = suffix_array(t,s,n);
        long long lcp_sum = 0,suffix_sum = 0;
        lcp_sum = LCParray(s,p,n);
        for(int i=0;i<n;i++)
            suffix_sum += p[i];
        printf("%lld\n",(long long)n*n - lcp_sum - suffix_sum);
    }
    return 0;
}
/*
USER: zobayer
TASK: SUBST1
ALGO: suffix array
*/

#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char str[50005];
int s[50005];
long long l;

int cmp(const void *a,const void *b) {
	return (strcmp((str+ *((int*)a)),(str+ *((int*)b))));
}

void suffix_array(int n) {
	int i;
	for(i=0;i<n;i++) s[i]=i;
	qsort(s,n,sizeof(int),cmp);
}

long long lcp(void) {
	int i, j, k;
	long long count = 0;
	char *z = str, *y = str;
	int p[50005] = {0};
	for(i=1,k=0;i<l;i++,k=0) {
		z = str + s[i];
		y = str + s[i-1];
		while(*z==*y) {
			p[i]++;
			z++;
			y++;
		}
		count += p[i];
	}
	return count;
}

int main() {
	int n, i, j, c;
	scanf("%d",&n);
	while(n--) {
		scanf("%s",str);
		l = strlen(str);
		suffix_array(l);
		c = lcp();
		printf("%lld\n", (l*(l+1)/2)-c);
	}
	return 0;
}
