
#include <stdio.h>
int fibonachi(int n){
if (n==1||n==2)
return 1;
else
return fibonachi(n-1)+fibonachi(n-2);
}
int main()
{ int n,f;
printf("enter the value of n");
scanf("%d",&n);
f=fibonachi(n);
printf("%d",f);

    return 0;
}
