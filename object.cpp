/// class intro
/*#include<iostream>
using namespace std;
class rectangle{
  public:
   int height;
   int width;
   int area();  /// member function
};
inline int rectangle::area()
{
  return height*width;
}
int main()
{
    rectangle obj;
    obj.height=5;
    obj.width=6;
    cout<<"Area = "<<obj.area()<<endl;
    return 0;
}*/

 /// public private protected
/*#include<iostream>
using namespace std;
class rectangle{
private:
   int height;
   int width;
public:
   void set(int h,int w);
   int area();
};
void rectangle::set(int h,int w)
{
    height=h;
    width=w;
}
int rectangle::area()
{
  return height*width;
}
int main()
{
    rectangle obj;
    obj.set(5,6);
    cout<<"Area = "<<obj.area()<<endl;
    return 0;
}*/
 /// constructor Destructor
/*#include<iostream>
using namespace std;
class rectangle{
private:
   int height;
   int width;
public:
  // void set(int h,int w);
   int area();
   rectangle(int h,int w);
   ~rectangle();
};
 rectangle::rectangle(int h,int w)
{
    height=h;
    width=w;
    cout<<"constructor "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"Destructor "<<area()<<endl;
}
int rectangle::area()
{
  return height*width;
}
int main()
{
    rectangle obj(1,2),obj1(3,7);
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    /*int *ptr;
    ptr=new int (5);
    //int a=5;
  //  ptr=&a;
    cout<<*ptr<<endl;
    *ptr=7;
    cout<<*ptr<<endl;
    delete (ptr);*/
   /* int *ptr;
    ptr=new int[5];
    ptr[1]=6;
    cout<<*(ptr+1) <<endl;
    cout<<ptr[1]<<endl;
    return 0;
}*/
   /// assign object
/*#include<iostream>
using namespace std;
class rectangle{
private:
   int height;
   int width;
public:
   void set(int h,int w);
   int area();
};
void rectangle::set(int h,int w)
{
    height=h;
    width=w;
}
int rectangle::area()
{
  return height*width;
}
int main()
{
    rectangle obj,obj1;
    obj.set(2,3);
    obj1.set(5,6);
    cout<<"Area1 = "<<obj.area()<<endl;
    cout<<"Area2 = "<<obj1.area()<<endl;
    obj=obj1;
    cout<<"Area1 = "<<obj.area()<<endl;
    cout<<"Area2 = "<<obj1.area()<<endl;
    return 0;
}*/
 /// Arrays of objects it is  better to use set function
/*#include<iostream>
class rectangle {
    int height;
    int width;
  public:
     void set(int h,int w){ height=h; width=w; }
     int area(){ return height*width; }
};

using namespace std;
int main()
{
    rectangle obj[5];
    obj[0].set(1,2);
    obj[1].set(2,2);
    obj[2].set(3,2);
    obj[3].set(4,2);
    obj[4].set(5,2);
    for(int i=0; i<5; i++)
        cout<<obj[i].area()<<endl;
    return 0;
}*/
  /// constructive one parameter
/*#include<iostream>
class rectangle {
    int height;
    int width;
  public:
     rectangle(int a){ height=a; width=a; }
     int area(){ return height*width; }
};

using namespace std;
int main()
{
    rectangle obj[5]={1,2,3,4,5};
    for(int i=0; i<5; i++)
        cout<<obj[i].area()<<endl;
    return 0;
}*/
  /// two parameter
/*#include<iostream>
class rectangle {
    int height;
    int width;
  public:
     rectangle(int h,int w){ height=h; width=w; }
     int area(){ return height*width; }
};

using namespace std;
int main()
{
    rectangle obj[5]={rectangle(1,2),rectangle(2,2),rectangle(3,2),rectangle(4,2),rectangle(5,2)};
    for(int i=0; i<5; i++)
        cout<<obj[i].area()<<endl;
    return 0;
}*/
 /// object pointer
/*#include<iostream>
using namespace std;
class rectangle {
    int height;
    int width;
  public:
     void set(int h,int w){ height=h; width=w; }
     int area(){ return height*width; }
};
int main()
{
    /*rectangle obj;
    rectangle *p;
    obj.set(3,4);
    cout<<obj.area()<<endl;
    p = &obj;
    p->set(2,7);
    cout<<obj.area()<<endl;*/
   /* rectangle obj[5];
    obj[0].set(1,2);
    obj[1].set(2,2);
    obj[2].set(3,2);
    obj[3].set(4,2);
    obj[4].set(5,2);
    rectangle *p;
    p = obj;
    for(int i=0; i<5; i++)
        cout<<(p+i)->area()<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
class rectangle {
    int height;
    int width;
  public:
     void set(int h,int w){ this->height=h; this->width=w; }
     int area(){ return height*width; }
};
int main
{
    rectangle obj;
    obj.set(2,3);
    cout<<obj.area()<<endl;
    return 0;
}


