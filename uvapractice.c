#include<stdio.h>
int main()
{
    int arr[200][200],n,i,color[200],temp[200],edg,flag,a,b,x,y;
    while(scanf("%d",&n)){

       for(i=0;i<n;i++){
        arr[i][0]=0;// printf("arr[%d][0]: %d\n",i,arr[i][0]);
        color[i]=0;// printf("%d ",color[i]);
       }
        scanf("%d",&edg);
        for(i=0;i<edg;i++){
            scanf("%d %d",&a,&b);

            arr[a][arr[a][0]++]=b;  // x=++arr[a][0];  // printf("arr[%d][0]: %d ,a,0,x\n",a,x);
            printf("arr[%d][%d]: %d ,a,arr[a][0]++,b\n",a,arr[a][0],b);

            arr[b][arr[b][0]++]=a;  //y=++arr[b][0]; //printf("arr[%d][0]: %d ,b,0,y\n",a,y);
            printf("arr[%d][%d]: %d ,b,arr[b][0]++,a\n",b,arr[b][0],a);
          }
          temp[0]=a;
          color[a]=1;
          x=0;
          top=1;
          flag=1;
          while(x!=top){
            a=temp[x];
            x++;
            if(color[a]==1)
                y=2;
            else
                y=1;
            z=arr[a][0];
            for(i=1;i<=z;i++){
                b=arr[a][i];
                if(color[b]==0)
            }
          }
        }

    return 0;
}
