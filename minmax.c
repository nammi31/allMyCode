#include <stdio.h>
int arra[100];

void Input();
void Output();
void Min_Max();
int main()
   {


 Input();
Min_Max();
Output();

    return 0;
}
void Input()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }

}
void Min_Max(int n)
{
    int c,i,j;

    for(i=0;i<n;i++)
        {for(j=i+1;j<n;j++)
    {
        if(arra[j]<arra[i])
        {
            c=arra[j];
            arra[j]=arra[i];
            arra[i]=c;
        }
    }
        }

}
 void Output(int n)
{
    printf("%d %d",arra[1],arra[n-2]);
}
