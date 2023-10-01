
#include <stdio.h>

int main()
{ int i,j,n;
printf("enter the value of n");
scanf("%d",&n);

for(i=1;i<=n;i++){
    char a=65;

    for(j=1;j<=i;j++){
       printf("%c",a); 
       a=a+1;
    }
    printf("\n");
}

    return 0;
}
