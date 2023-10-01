
#include <stdio.h>

int main()
{ int i,j,m,n;
printf("enter the value of n");
scanf("%d",&m);
for(i=1;i<=m;i++){
  for(j=m;j>=i;j--){
      
      printf("*");
  } 
  printf("\n");
}

    return 0;
}
