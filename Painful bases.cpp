using namespace std;
#include <bits/stdc++.h>
int k;
const int inf = 1 << 30;
const int mx = 1111;
int dp[mx];
int pl[mx][mx];

bool pal( string str, int s, int e) {
  if (s >= e)
    return true;
  if (pl[s][e] != -1)
    return pl[s][e];
  return pl[s][e] = (str[s] == str[e]) && pal(str, s + 1, e - 1);
}

int go(string str, int s) {
  if (s == str.size())
    return 0;

  if (dp[s] != -1)
    return dp[s];

  int mn = inf;
  for (int i = s; i < str.size(); ++i) {
      printf("pal s=%d e=%d %c%c  %d\n",s,i,str[s],str[i],mn);
    if (pal(str, s, i)){
      mn = min(mn, 1 + go(str, i + 1));}
  }
  return dp[s] = mn;
}

void solve() {
  string str;
  cin >> str;
  printf("Case %d: ", k++);
  memset(dp, -1, sizeof dp);
  memset(pl, -1, sizeof pl);
  printf("%d\n", go(str, 0));
}

int main() {
  int t;
  cin >> t;
  k=1;
  while (t--) {
    solve();
  }
  return 0;
}
