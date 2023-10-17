#include <stdio.h>

int main()
{ int i,n;
int max;
printf("enter the value of n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("enter the value of %d\n",i+1);
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }  
  }
  printf("%d",max);

    return 0;
}
