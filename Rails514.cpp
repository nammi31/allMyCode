#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,ar[1000],i;
    while(cin>>n && n){
        while(1){
            cin>>ar[0];
            if(ar[0]==0) break;
            for(i=1;i<n;i++)  cin>>ar[i];
            int a=1,b=0;
            stack<int> st;
            while(a<=n){
                st.push(a);
                while(!st.empty() && st.top()==ar[b]){
                       st.pop();
                       b++;
                       if(b>=n)  break;
                }
            }
            a++;
        }
        cout<<" Yes\n";
      // else cout<<"No\n";
    }
    return 0;
}
