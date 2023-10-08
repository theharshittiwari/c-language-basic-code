#include <stdio.h>
void swap(int* x , int* y){
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
 return ;
}

int main()
{ int a,b;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("the value of a is %d \n",a);
printf("the value of b is %d ",b);




    return 0;
}
