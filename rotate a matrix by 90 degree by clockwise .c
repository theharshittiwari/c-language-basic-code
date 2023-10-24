#include <stdio.h>

int main()
{ int i,j,r,c;
printf("enter the value of r ad c");
scanf("%d %d",&r,&c);
int n=r-1;
int a[r][c];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);        
    }
}
printf("\n");
for(j=0;j<c;j++){
for(i=n;i>=0;i--){
printf("%d ",a[i][j]);
}
printf("\n");
    
}



    return 0;
}
