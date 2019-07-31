/*#include<bits/stdc++.h>
using namespace std;
struct Person
{
    char name[20];
    int age;
    int salary;
};
int main()
{
    Person p = {"Kalam", 38, 60000};
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %d\n", p.salary);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
struct Person
{
    char name[20];
    int age;
    int salary;
    struct address
    {
        int house_no;
        char street[30];
        char post[30];
        char district[30];
    };
};
int main()
{
   Person p1;
   p1.age = 34;
   p1.address.house_no = 2543;
   return 0;
}
