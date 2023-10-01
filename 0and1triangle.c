
#include <stdio.h>

int main()
{ int i,j,n;
printf("enter the value of n");
scanf("%d",&n);
int a;
for(i=1;i<=n;i++){
    if(i%2==0){
        a=0;
    }
    else{
        a=1;
    }
    for(j=1;j<=i;j++){
        printf("%d",a);
        if(a==1){
            a=0;
        }
        else if(a==0){
            a=1;
        }
        
    }
    printf("\n");
}

    return 0;
}
