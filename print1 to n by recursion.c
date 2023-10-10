#include <stdio.h>
void number(int x,int n){
 printf("%d\n",x);
 if(x==n)
 return ;
 else{
     return number(x+1,n);
 }
}

int main()
{ int n,x=1;
printf("enter the value of n");
scanf("%d",&n);
number(x,n);


    return 0;
}
