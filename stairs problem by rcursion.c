
#include <stdio.h>
int stairs(int n){
if (n==1||n==2)
return n;
else
return stairs(n-1)+stairs(n-2);
}
int main()
{ int n,ways;
printf("enter the value of n");
scanf("%d",&n);
ways=stairs(n);
printf("%d",ways);

    return 0;
}
