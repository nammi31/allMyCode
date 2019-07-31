/*#include<iostream>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int height,int width){ this->height=height; this->width=width; }
    int area(){ return width*height; }
};
void print(rectangle abc)  //class parameter hiseve use kora
{
    cout<<abc.area()<<endl;
}
rectangle scan () //object return
{
    int h,w;
    cin>>h>>w;
    rectangle ob;
    ob.set(h,w);
    return ob;
}
int main()
{
    rectangle obj;
    obj = scan();
    print(obj);
    return 0;
}*/

 /// friend function
#include<iostream>
using namespace std;
class rectangle{
    int height;
    int weight;
public:
    void set(int h,int w){ height=h; weight=w;}
    int area(){ return height*weight; }
    friend class cost;
};
class cost{
    int costRate;
 public:
    void setValue(int a) {costRate=a; } ;
    int totalcost(rectangle A){
        return costRate*A.area();
    }
};
int main()
{
    rectangle r;
    r.set(5,6);
    cost c;
    c.setValue(100);
    cout<<r.area()<<endl;
    cout<<c.totalcost(r)<<endl;
    return 0;
}
