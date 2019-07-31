/*#include <iostream>
#include <cstring>
#include <numeric>
using namespace std;

int M, sum, sticks[20];
int memo[1 << 20];

int search(int length, int bitMask)
{
    if (memo[bitMask] != -1)
        return memo[bitMask];

    if (length > sum / 4)
        return 0;
    else if (length == sum / 4)
    {
        if (bitMask == (1 << M) - 1)
            return 1;
        length = 0;
    }

    for (int i = 0; i < M; ++i)
        if ((bitMask & 1 << i) == 0
            && search(length + sticks[i], bitMask | 1 << i))
        {
            return 1;
        }
    return memo[bitMask] = 0;
}

int solve()
{
    sum = accumulate(sticks, sticks + M, 0);
    if (sum % 4 != 0)
        return 0;

    memset(memo, -1, sizeof memo);
    return search(0, 0);
}

int main()
{
    int N;
    cin >> N;
    while ( N-- )
    {
        cin >> M;
        for (int i = 0; i < M; ++i)
            cin >> sticks[i];

        cout << (solve()? "yes" : "no") << endl;
    }
    return 0;
}
*/
/*#include <iostream>
#include <cstdio>
#include <algorithm>
#include <ctime>
using namespace std;


int dp[1<<20];
int val[1<<20];
int a[23];
int N;


void solve() {
    for(int b=0, sz=(1<<N);b<sz;++b){
        val[b] = -1;
        dp[b] = 0;
    }
    int sum = 0;
    val[0] = 0;
    for(int i=0;i<N;++i){
        sum += a[i];
        val[1<<i] = a[i];
    }
    int X = sum/4;
    if(sum % 4 != 0) {
        printf("no\n");
        return;
    }
    for(int b=0, sz=(1<<N);b<sz;++b){
        if(val[b] != -1) continue;
        int msb = b & (-b);
        val[b] = val[msb] + val[b ^ msb];
    }
    for(int b=0, sz=(1<<(N-1));b<sz;++b){
        int bm = (b << 1) | 1;
        for(int i=0;i<N-1;++i){
            if(b & (1<<i)) {
                dp[b] = max(dp[b], dp[b ^ (1<<i)]);
            }
        }
        if(val[bm] == (dp[b]+1) * X) dp[b]++;
    }
    if(dp[(1<<(N-1))-1] == 4) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

int main(){
    int TC;
    scanf("%d", &TC);
    while(TC--){
        scanf("%d",&N);
        for(int i=0;i<N;++i) scanf("%d",&a[i]);
        solve();
    }
    return 0;
}
*/
/*
#include <string.h>
#include <cstdio>
#include <climits>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>

using namespace std;
    int test;
    int M[20], N, L;
    int memo[4][1 << 20];

    int move( int k, int bitmask , int  sum){

        if( k == 4 ) return 1;
        if( sum == L ) return move(k+1, bitmask, 0);
        if( memo[k][bitmask] != -1) return memo[k][bitmask];
        int ans = 0;
        for ( int i = 0; i < N && !ans ; i++ ){
            if( !(bitmask & (1 << i)) && sum + M[i] <= L ){
               ans = ans | move(k, bitmask | (1 << i), sum + M[i]);
            }
        }
        return memo[k][bitmask] = ans;
    }
int main(){
   //freopen("input.txt", "r", stdin);
   scanf("%d", &test);
   int sum;
   while( test-- ){
       sum = 0;
       scanf("%d", &N);
       for( int i = 0; i < N; i++ ) {
           scanf("%d", &M[i]);
           sum += M[i];
           }

           L = sum/4;
           if( 4*L != sum){
               puts("no");
               continue;
           }

        for( int i = 0; i < 4; i++ )
            memset(memo[i], -1, sizeof(int) * (1 << N) );
        if( move(0, 0, 0) ) puts("yes");
        else puts("no");

   }





	return 0;
}
*/
