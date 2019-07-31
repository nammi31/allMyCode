/*#include<stdio.h>
using namespace std;
struct product{
    int weight;
    int price_perkg;
};
int main()
{
    product apple; /// i just create a data type like int/double/char
    scanf("%d %d",&apple.weight,&apple.price_perkg);
    int cost=apple.weight*apple.price_perkg;
    printf("%d\n",cost);
    return 0;
}*/
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i;
    for(i=0; i<3; ++i){
        s[i].roll = i+1;
        scanf("%s",s[i].name);
        scanf("%f",&s[i].marks);
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<3; ++i)
    {
        printf("\nRoll number: %d\n",s[i].roll);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f\n",s[i].marks);
    }
    return 0;
}
