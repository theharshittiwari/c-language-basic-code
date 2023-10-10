#include <stdio.h>
void number(int n){
    
    if(n==0)
    return ;
     number(n-1);
      printf("%d\n",n);
    return;
    
}

int main()
{ int n;
printf("enter the value of n");
scanf("%d",&n);
number(n);


    return 0;
}
