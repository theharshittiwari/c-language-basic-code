#include <stdio.h>

int main()
{ int i,j,k,n;
printf("enter the value of n");
scanf("%d",&n);
int nst=1;
int nsp=n/2;
int ml=(n/2+1);
for(i=1;i<=n;i++){
    for(j=1;j<=nsp;j++){
        printf(" ");
    }
    for(k=1;k<=nst;k++){
     printf("*");   
    }
    if(i<ml){
        nsp--;
        nst+=2;
    }
    else{
        nsp++;
        nst-=2;
    }
    printf("\n");
}

    return 0;
}
