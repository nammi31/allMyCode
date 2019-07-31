/*#include<iostream>
using namespace std;
int main()
{
    int v=10;
    int *p1;
    p1=&v;
    int **p2;
    p2=&p1;
    cout<<"value of v1 "<<*p1<<endl;
    cout<<"value of p1 "<<p1<<endl;
    cout<<"address of p1 "<<&p1<<endl;

    cout<<"value of p2 "<<p2<<endl;
    cout<<"point kore "<<**p2<<endl;
    return 0;
}*/
///pointer to array

 /*#include<iostream>
 using namespace std;
 int main()
 {
     int a[5]={1,2,3,4,5};
     int *p = a;
     for(int i=0;i<5;i++)
        cout<<*(p+i)<<" ";
     return 0;
 }*/
 ///new delete Dynamic memory Allowcation

 /*#include<iostream>
 using namespace std;
 int main()
 {
     int *p;
     p=new int(10);
     cout<<*p<<" "<<p<<endl;
     delete p;
     cout<<*p<<" "<<p<<endl;
     return 0;
 }*/

 /// Dynamic array 1
 #include<iostream>
 using namespace std;
 int main()
 {
     int *arr,sum(0),n;
     cin>>n;
     arr = new int[n];
     for(int i=0;i<n; i++){
        cout<<i+1<<" ";
        cin>>*(arr+i);
        sum+=*(arr+i);
     }
     cout<<sum<<endl;
     delete []arr;
     return 0;
 }

