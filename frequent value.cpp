#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <vector>
using namespace std;

#define For(i, a, b) for (int i=a; i<=b; i++)
#define maxN 100001
int n, a[maxN], s, e , ans, q;
int nodeval[maxN*3];
int Left[maxN*3], Right[maxN*3];

void build(int v, int s, int e) {
    if (s==e) {
        nodeval[v] = 1;
        Left[v] = Right[v] = 1;
        return;
    }
    int mid = (s+e)/2;
    build(2*v, s, mid);
    build(2*v+1, mid+1, e);
    nodeval[v] = max(nodeval[2*v], nodeval[2*v+1]);
    if (a[mid]==a[mid+1])
        nodeval[v] = max(nodeval[2*v], Right[2*v] + Left[2*v+1]);
    Left[v] = Left[2*v];
    if (a[2*v]==a[mid+1]) Left[v] += Left[2*v+1];
    Right[v] = Right[2*v+1];
    if (a[2*v+1]==a[mid]) Right[v] += Right[2*v];
}

void query(int v, int s, int e) {
    if (qs<e || qe<s) return;
    if (qs<=s && qe<= e) {
        ans = max(ans, nodeval[v]);
        return;
    }

    int mid = (e+s)/2, c = 2*v;
    query(c, s, mid);
    query(c+1, mid+1, e);
    if (a[mid]==a[mid+1]) {
        int x = Right[c], y = Left[c+1];
        x = min(x, mid-s+1);
        y = min(y, e-mid);
        ans = max(ans, x+y);
    }
}

main() {
//    freopen("235.inp", "r", stdin); freopen("235.out", "w", stdout);
    while (scanf("%d", &n) && n) {
        scanf("%d", &q);
        For (i, 1, n) scanf("%d", &a[i]);
        build(1, 1, n);
        while (q--) {
            ans = 0;
            scanf("%d %d", &qs, &qe);
            get(1, 1, n);
            printf("%d\n", ans);
        }
    }
}

