
/*#include<bits/stdc++.h>  /// print using operator[] normally-reversly
using namespace std;
int main()
{
    vector<int>v(10);  ///like an array
    vector<int>::size_type sz=v.size();
    int i,temp;
    for( i=0;i<sz;i++){
      v[i]=i;  ///same v.at(i)
      cout<<v[i]<<" ";
    }
    cout<<endl;
    for( i=0;i<sz/2;i++){
       temp=v[sz-1-i];
       v[sz-1-i]=v[i];  ///last element-first
       v[i]=temp;
    }
    for(i=0;i<sz;i++) cout<<v[i]<<" ";  ///same as v.at(i)
    return 0;
}

/*#include<bits/stdc++.h> ///push_back()
using namespace std;
int main()
{
    vector<int>v;
    int i;
    for( i=0;i<5;i++)  v.push_back(i);
    for( i=0;i<5;i++)  cout<<v[i]<<" ";
    for(i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
    return 0;
}*/
            //  iterator
/*#include<bits/stdc++.h>  /// v.begin() & v.end()
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=5;i++)  v.push_back(i);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}*/
/*#include<bits/stdc++.h> ///v.rbegin() & v.rend()
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=9;i++)
        v.push_back(i);
    vector<int>::reverse_iterator rt;
    for(rt=v.rbegin(); rt!=v.rend(); rt++)
        cout<<' '<<*rt;
    return 0;
}
      //capacity
/*#include<bits/stdc++.h> ///v.size()
using namespace std;
int main()
{
   vector<int>v;
   cout<<v.size()<<endl;
   for(int i=1;i<10;i++) v.push_back(i);
   cout<<v.size()<<endl;
   v.insert(v.end(),5,100);
   cout<<v.size()<<endl;
   v.pop_back();
   cout<<v.size()<<endl;
    return 0;
/*#include<bits/stdc++.h> /// resize();
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++) v.push_back(i);
    v.resize(5);
    v.resize(8,100);
    v.resize(12);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}*/
/*#include<bits/stdc++.h>  ///max_size() & capacity()
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++) v.push_back(i);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    return 0;
}*/
/*      ///empty & back
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int sm=0;
    for(int i=0;i<=5;i++)  v.push_back(i);
    while(!v.empty()){
        sm+=v.back();  //access last element//like a stack
        v.pop_back();
    }
    cout<<sm<<endl;
    return 0;
}*/
 /*  ///reserve
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>::size_type sz;
    vector<int>v1;
    sz=v1.capacity();
    for(int i=1;i<=30;i++)  v1.push_back(i);
    if(sz!=v1.capacity()){
        sz=v1.capacity();
        cout<<"capacity changed "<< sz<<endl;
    }
    vector<int>v2;
    sz=v2.capacity();
    v2.reserve(100);
    cout<<v2.capacity()<<endl;
    for(int i=1;i<=210;i++) v2.push_back(i);
    if(sz!=v2.capacity()){
        sz=v2.capacity();
        cout<<"capacity change "<<sz<<endl;
    }
    return 0;
}*/
 /*   ///v.front()
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(78);
    v.push_back(45);
    v.push_back(56);
    v.push_back(16);
    v.front()-=v.back();  ///FIRST element
    cout<<v.front()<<endl;
    return 0;
}*/
/*///vector assign
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    v1.assign(5,100);   ///assign first 5 element 100
    vector<int>::iterator it;
    it=v1.begin()+1;
    v2.assign(it,v1.end()-1);  ///assign v1 center element to v2
    int a[]={45,98,7,6};
    v3.assign(a,a+3);  /// assign first 3 array element
    cout<<v1.size()<<" "<<v2.size()<<" "<<v3.size();
    return 0;
}*/

