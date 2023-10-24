#include <stdio.h>

int main()
{ int i,j,r,c;
printf("enter the value of r ad c");
scanf("%d %d",&r,&c);
int a[r][c];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);        
    }
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d ",a[j][i]);        
    }
    printf("\n");
}

    return 0;
}
