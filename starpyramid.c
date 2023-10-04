#include <stdio.h>

int main()
{ int i,j,k,n;
printf("enter the value of n");
scanf("%d",&n);
int nst=1;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=nst;k++){
        printf("*");
    }
    nst=nst+2;
    printf("\n");
}

    return 0;
}
