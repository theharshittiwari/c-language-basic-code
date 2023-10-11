#include <stdio.h>
int 
po(int a,int b){
if (b==1)
return a;
else
return a*po(a,b-1);
}
int main()
{ int a,b,p;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
p=po(a,b);
printf("%d",p);

    return 0;
}
