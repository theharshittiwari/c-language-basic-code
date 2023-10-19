#include <stdio.h>

int main() {
    int i,n,k;
    printf("enter the value of n and k");
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        printf("enter the element %d\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       if(i<=n-k){
           b[i]=a[(n-k)-i];
           }
           else
           b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d",b[i]);
    }

    return 0;
}
