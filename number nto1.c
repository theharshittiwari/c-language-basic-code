#include <stdio.h>
void number(int n){
  printf("%d\n",n);
  if(n==1)
  return;
  else{
      return number(n-1);
  }
}

int main()
{ int n;
printf("enter the value of n");
scanf("%d",&n);
number(n);


    return 0;
}
