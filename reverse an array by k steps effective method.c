#include <stdio.h>
void reverse(int a[],int si,int ei){
int i,j;
for(i=si,j=ei;i<=j;i++,j--){
int temp=a[i] ;
 a[i]=a[j];
 a[j]=temp;
    }
    return ;
}
int main()
{ int i,k,n,b,c;
printf("enter the value of n,b,c,k");
scanf("%d %d %d %d",&n,&b,&c,&k);
k=k%n;
int a[n];
for(i=0;i<n;i++){
    printf("enter the element %d\n",i+1);
    scanf("%d",&a[i]);
     }
reverse(a,b,c);
reverse(a,b,k-1);
reverse(a,k,n-1);
for(i=0;i<n;i++){
printf("%d",a[i]);
    }
 return 0;
}
