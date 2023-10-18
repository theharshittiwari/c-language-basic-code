#include <stdio.h>

int main()
{ int i,j,n,x;
int totalpair=0;
printf("enter the value of n and x");
scanf("%d",&n);
scanf("%d",&x);
int a[n];
for(i=0;i<n;i++){
    printf("enter the element %d\n",i+1);
    scanf("%d",&a[i]);}
for(i=0;i<n;i++){
 for(j=i+1;j<n;j++){
     if(a[i]+a[j]==x){
         totalpair=totalpair+1;
        
         printf("(%d,%d)\n",a[i],a[j]);
     }
 }   
}
 printf("%d",totalpair);

    return 0;
}
