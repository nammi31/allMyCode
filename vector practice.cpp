#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=5;i++)
        v.push_back(i);
    vector<int>::const_iterator it;
    for( it=v.cbegin();it!=cend();it++)
        cout<<*it<<" ";
   /*vector<int> v(5);  // 5 default-constructed ints
  int i=0;
  vector<int>::reverse_iterator rit;
  for (rit = v.rbegin(); rit!=v.rend(); ++rit)
      *rit = ++i;
   vector<int>::iterator it;
  for (it = v.begin(); it !=v.end(); ++it)
    cout << ' ' << *it;
    /*vector<int>v;
    for(int i=1;i<=5;i++)
        v.push_back(i);
    vector<int>::reverse_iterator rt;
    for(rt=v.rbegin(); rt!=v.rend(); rt++)
        cout<<' '<<*rt;*/
    return 0;
}
