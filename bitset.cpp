    /// bitset::operator[]
/*#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4>b;
    b[1]=1;
    b[2]=1;
    cout<<b<<endl;
    return 0;
}*/
    ///bitset::count
/*#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
{
    bitset<8>b (string ("10110011"));
    cout<<b<<endl;
    cout<<b.count()<<endl;
    cout<<(b.size()-b.count())<<endl;
    return 0;
}*/
  ///bitset::size
/*#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4>b1;
    bitset<8>b2;
    cout<<b1.size()<<" "<<b2.size();
    return 0;
}*/
   ///bitset::test
/*#include<iostream>
#include<bitset>
#include<cstddef>
#include<string>
using namespace std;
int main()
{
    bitset<5> b (string ("01011"));
    cout<<boolalpha;
    for(size_t i=0; i<b.size(); i++)   ///unsigned integer type
         cout<<b.test(i)<<" ";
    return 0;
}*/
   ///bitset::any/none
/*#include<bits/stdc++.h>
#include<bitset>
using namespace std;
int main()
{
    bitset<16> b;
    cin>>b;
    if(b.any())  cout<<b<<" has "<<b.count();
    else if(b.none()) cout<<"no bits set.\n";
    return 0;
}*/
   /// bitset::set
/*#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4> b;         ///0000
    cout<<b.set()<<" ";   /// 1111
    cout<<b.set(2,0)<<" ";
    cout<<b.set(2)<<" ";
    return 0;
}*/
  /// bitset::reset
/*#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4> b (string ("1011"));
    cout<<b.reset(1)<<" ";
    cout<<b.reset()<<" ";
    return 0;
}*/
   ///bitset::flip
/*#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4> b (string ("0001"));
    cout<<b.flip(2)<<" ";  /// converting zeros into ones and ones into zeros
    cout<<b.flip()<<" ";
    return 0;
}*/
   /// bitset::to_string
/* #include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
{
   bitset<4> b;
   b.set();
   string s=b.to_string<char,string::traits_type,string::allocator_type>();
   cout<<s<<endl;
   return 0;
}*/
  ///

