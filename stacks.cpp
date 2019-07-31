#include<stdio.h>
int stck[1000];
int stck_size=0;
int push(int n){
    if(stck_size==1000) printf("stck overflowed\n");
else{
  stck[stck_size]=n;
  stck_size++;
}
return 0;
}
int pop(){
   if(stck_size==0) printf("stck underflowed\n");
   else
    stck_size--;
    return 0;
}
int disply (){
    int i;
   for(i=0;i<stck_size;i++){
    printf("%d ",stck[i]);
   }
   return 0;
}
int main()
{
    int i,choice,num;
    while(scanf("%d",&choice)==1){
       if(choice==1)
          disply();
       else if(choice==2){
         scanf("%d",&num);
          push(num);
       }
       else
        pop();
    }

}
